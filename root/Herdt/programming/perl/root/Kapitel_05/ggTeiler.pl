#!/usr/bin/perl
use strict;
print "\nErste Zahl: ";
my $zahl1=<STDIN>;
print "Zweite Zahl: ";
my $zahl2=<STDIN>;

while ($zahl2 != 0) {
  my $temp = $zahl2;
  $zahl2 = $zahl1 % $zahl2;
  $zahl1 = $temp;
}

print "\nDer groesste gemeinsame Teiler ist $zahl1.\n";