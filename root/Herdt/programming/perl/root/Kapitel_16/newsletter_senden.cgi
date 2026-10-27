#!"F:/ActivePerl/bin/perl.exe"
use strict;
use CGI;
use CGI::Carp qw( fatalsToBrowser );
use Mail::Sendmail;
use DBI;
my $datenquelle="dbi:mysql:homepage";
my $benutzer="root";
my $passwort="";
my $tabelle="newsletter";
my $from="info\@meineseite.de";
my $smtp_server="smtp.meineseite.de";
my $gesendet=0;
my $name;
my $email;
my $cgi=new CGI;
print $cgi->header;
print $cgi->start_html('Newsletter');

if (!$cgi->param) {
  print $cgi->h3({style=>'font-family:sans-serif'},'Newsletter');
  print $cgi->p({style=>'font-family:sans-serif'},'Geben Sie den Betreff und den Nachrichtentext ein.');
  print $cgi->startform('POST',$cgi->script_name);
  print $cgi->start_p({style=>'font-family:sans-serif'});
  print $cgi->b('Betreff:').$cgi->br;
  print $cgi->textfield(-name=>'betreff',-size=>'40').$cgi->br.$cgi->br;
  print $cgi->b('Ihre Nachricht:').$cgi->br;
  print $cgi->textarea(-name=>'text',-rows=>'15',-columns=>'60').$cgi->br.$cgi->br;
  print $cgi->submit(-value=>'Absenden');
  print $cgi->endform;
} else {
  my $dbh=DBI->connect($datenquelle,$benutzer,$passwort) || &Fehler("Keine Verbindung zum Datenbankserver möglich! Fehler: $DBI::errstr");
  my $abfrage=$dbh->prepare("SELECT name,email FROM $tabelle");
  $abfrage->execute;
  while (($name,$email)=$abfrage->fetchrow_array) {
	if ($email =~ /^[_\.a-z0-9]+\@[-\.a-z0-9]+\.[a-z]{2,4}$/i) {
      my %mail=(To      => "\"$name\" <$email>",
             From    => $from,
             Subject => $cgi->param('betreff'),
             Message => $cgi->param('text'),
             smtp    => $smtp_server);

      if (sendmail(%mail)) {
        $gesendet++; 
      } else {
        print $cgi->h3({style=>'font-family:sans-serif'},'Fehler beim Senden');
        print $cgi->p({style=>'font-family:sans-serif'},"Beim Versenden der Nachricht ist folgender Fehler aufgetreten: $Mail::Sendmail::error");
      }    
    }
  }
  print $cgi->h3({style=>'font-family:sans-serif'},'Newsletter verschickt');
  print $cgi->p({style=>'font-family:sans-serif'},"Der Newsletter wurde an $gesendet Empfänger gesendet.");
}
print $cgi->end_html;
