#!"F:/ActivePerl/bin/perl.exe"
use strict;
use CGI;
use CGI::Carp qw( fatalsToBrowser );
my $cgi = new CGI;
my $mailprogramm="/usr/sbin/sendmail -t";
my $to="info\@meineseite.de";
my $from="info\@meineseite.de";

print $cgi->header;

if (!$cgi->param('from')) {
  $cgi->param(-name=>'from',-value=>$from);
}

open(MAIL,"|$mailprogramm") || die("Das E-Mail-Programm konnte nicht gestartet werden.");
print MAIL "From: \"".$cgi->param('name')."\" <".$cgi->param('from').">\n";
print MAIL "To: $to\n";
print MAIL "Subject: ".$cgi->param('betreff')."\n\n";
print MAIL $cgi->param('text');
close(MAIL);

print $cgi->start_html('Kontakt');
print $cgi->h3({style=>'font-family:sans-serif'},'Nachricht gesendet');
print $cgi->p({style=>'font-family:sans-serif'},'Vielen Dank für Ihre Nachricht. Wir werden uns umgehend darum kümmern');

print $cgi->end_html;



