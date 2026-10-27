#!"F:/xampp/perl/bin/perl.exe"
use strict;
use CGI;
my $cgi = new CGI;

my $anzahl_besuche=$cgi->cookie('AnzahlBesuche');
my $cookie=$cgi->cookie(-name=>'AnzahlBesuche',
                     -value=>$anzahl_besuche+1,
					 -expires=>'+1y');
print $cgi->header(-cookie=>$cookie);
print $cgi->start_html('Besuchszähler');
print $cgi->p("Sie sind das $anzahl_besuche. Mal auf dieser Seite");
print $cgi->end_html;
