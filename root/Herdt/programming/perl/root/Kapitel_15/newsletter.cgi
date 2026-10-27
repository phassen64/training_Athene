#!"F:/ActivePerl/bin/perl.exe"
use strict;
use DBI;
use CGI;
use CGI::Carp qw( fatalsToBrowser );
my $datenquelle="dbi:mysql:homepage";
my $benutzer="root";
my $passwort="";
my $mysql;
my $tabelle="newsletter";

my $cgi=new CGI;
my $dbh=DBI->connect($datenquelle,$benutzer,$passwort) || &Fehler("Keine Verbindung zum Datenbankserver möglich! Fehler: $DBI::errstr");

print $cgi->header;
print $cgi->start_html("Newsletter");

if (!$cgi->param) {
  print $cgi->h3({style=>'font-family:sans-serif'},'Newsletter');
  print $cgi->p({style=>'font-family:sans-serif'},'Mit diesem Formular können Sie sich für den Newsletter an- bzw. abmelden.');
  print $cgi->startform('POST',$cgi->script_name);
  print $cgi->start_p({style=>'font-family:sans-serif'});
  print $cgi->b('Ihr Name:').$cgi->br;
  print $cgi->textfield(-name=>'name',-size=>'40').$cgi->br.$cgi->br;
  print $cgi->b('Ihre E-Mail-Adresse:').$cgi->br;
  print $cgi->textfield(-name=>'email',-size=>'40').$cgi->br.$cgi->br;
  print $cgi->radio_group(-name=>'modus',-values=>['anmelden','abmelden']).$cgi->br.$cgi->br;
  print $cgi->submit(-value=>'Absenden');
  print $cgi->endform;
} else {
  if (!$cgi->param('name') && !$cgi->param('email')) {
    &Fehler("Bitte geben Sie Name und E-Mail-Adresse an!");
  }
  my $email=$cgi->param('email');
  if ($email !~ /\w+@.+\.\w+/) {
    &Fehler("Die E-Mail-Adresse ".$cgi->b($cgi->param('email'))." scheint nicht gültig zu sein!");
  }
  my $abfrage=$dbh->prepare("SELECT id FROM $tabelle WHERE email=?");
  $abfrage->execute($cgi->param('email'));
  my $gefunden=$abfrage->rows;
  if ($cgi->param('modus') eq "anmelden") {
    if ($gefunden<=0) {
      my $sql="INSERT INTO $tabelle (name,email,datum) VALUES(";
	  $sql.=$dbh->quote($cgi->param('name')).",";
  	  $sql.=$dbh->quote($cgi->param('email')).",now())";
	  $dbh->do($sql) || &Fehler("Fehler beim Speichern der E-Mail-Adresse: ".$dbh->errstr);
      print $cgi->p({style=>'font-family:sans-serif'},"Die E-Mail-Adresse ".$cgi->b($cgi->param('email'))." wurde gespeichert.");
    } else {
      &Fehler("Die E-Mail-Adresse ".$cgi->b($cgi->param('email'))." ist bereits gespeichert!");
	}
  } else {
    if ($gefunden>0) {
      my $sql="DELETE FROM $tabelle WHERE email=";
  	  $sql.=$dbh->quote($cgi->param('email'));
	  $dbh->do($sql) || &Fehler("Fehler beim Löschen der E-Mail-Adresse: ".$dbh->errstr);
      print $cgi->p({style=>'font-family:sans-serif'},"Die E-Mail-Adresse ".$cgi->b($cgi->param('email'))." wurde gelöscht.");
    } else {
      &Fehler("Die E-Mail-Adresse ".$cgi->b($cgi->param('email'))." ist nicht gespeichert!");
	}
  }
}

print $cgi->end_html;

sub Fehler {
  my $meldung=shift;
  print $cgi->h3({style=>'font-family:sans-serif'},'Fehler');
  print $cgi->p({style=>'font-family:sans-serif'},$meldung);
  print $cgi->p({style=>'font-family:sans-serif'},$cgi->a({href=>$cgi->script_name},'Zurück zum Formular'));
  print $cgi->end_html;
  exit;
}

