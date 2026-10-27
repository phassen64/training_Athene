#!"F:/ActivePerl/bin/perl.exe"
use strict;
use CGI;
use CGI::Carp qw( fatalsToBrowser );
use Mail::Sendmail;
my $cgi = new CGI;

my $cgi = new CGI;

my $to="ich\@absend.er";
my $from="ich\@absend.er";
my $smtp_server="smtp.absend.er";

print $cgi->header;
print $cgi->start_html('Kontakt');

if (!$cgi->param('from')) {
  $cgi->param(-name=>'from',-value=>$from);
}

my %mail=(To      => "\"".$cgi->param('name')."\" <".$cgi->param('email').">",
       From    => $from,
	   Subject => $cgi->param('betreff'),
	   Message => $cgi->param('text'),
	   smtp    => $smtp_server);

if (sendmail(%mail)) {
  print $cgi->h3({style=>'font-family:sans-serif'},'Nachricht gesendet');
  print $cgi->p({style=>'font-family:sans-serif'},'Vielen Dank für Ihre Nachricht. Wir werden uns umgehend darum kümmern');
} else {
  print $cgi->h3({style=>'font-family:sans-serif'},'Nachricht nicht gesendet');
  print $cgi->p({style=>'font-family:sans-serif'},'Beim Versenden der Nachricht ist folgender Fehler aufgetreten: $Mail::Sendmail::error');
}

print $cgi->end_html;



