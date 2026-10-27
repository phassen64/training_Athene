#!/usr/bin/perl
use strict;
my @namen = qw(Peter Silke Franz Walter);
$namen[2] = "Franziska";
my @werte=(1 .. 10);

for (my $i=0; $i<=$#namen; $i++) {
  print "Der $i. Name lautet $namen[$i]\n";
}

my $zahl=++$werte[0];
print "Zahl = $zahl\n";