#!/usr/bin/perl
use strict;

my $html = "Ein <b>Beispiel</b> fr das <b>Non-Greedy-Verhalten</b> von Perl.";
$html =~ /<b>(.+)<\/b>/i;
print "$1\n";                  
$html =~ /<b>(.+?)<\/b>/i;
print "$1\n";

