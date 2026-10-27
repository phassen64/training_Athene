#!/usr/bin/perl
use strict;
my $ganze_zahl=&Zerlegung("24.75");
print "Der ganzzahlige Teil ist: $ganze_zahl\n\n";

my @zahl_teile=&Zerlegung("24.75");
print "Der ganzzahlige Teil ist: $zahl_teile[0]\n";
print "Der gebrochene Teil ist: $zahl_teile[1]\n";

sub Zerlegung {
  my @teile=split(/\./,$_[0]);
  wantarray ? ($teile[0],$teile[1]) : $teile[0];
}