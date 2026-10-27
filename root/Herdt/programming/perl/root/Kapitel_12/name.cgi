#!"F:/xampp/perl/bin/perl.exe"
use strict;
print "Content-type: text/html\n\n";

my $query_string=$ENV{'QUERY_STRING'};
(my $key, my $value)=split(/=/,$query_string);

print "<html>";
print "<head><title>Begrüßung</title>";
print "</head><body>";
print "<h3>Hallo $value!</h3>Willkommen auf meiner Seite...";
print "</body></html>";



