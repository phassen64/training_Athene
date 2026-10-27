#!/usr/bin/perl
use strict;
print "\nBerechnung der Summe von 1 bis zur Zahl: ";
my $zahl=<STDIN>;
chomp($zahl);

for (my $i=1; $i<=$zahl; $i++) {
  $summe += $i;
}

print "Die Summe von 1 bis $zahl beträgt $summe.\n";
