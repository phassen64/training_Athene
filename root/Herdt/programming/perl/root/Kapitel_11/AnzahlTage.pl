#!/usr/bin/perl
use strict;
use Time::Local;

print "Berechnung der Anzahl Tagen zwischen einem Datum und heute.\n\n";
print "Bitte geben Sie ein Datum in der Vergangenheit ein (TT.MM.JJJJ):\n";
my $datum=<STDIN>;
chomp($datum);

$datum =~ /(\d\d)\.(\d\d)\.(\d\d\d\d)/;
my $tag=$1;
my $monat=$2-1;
my $jahr=$3-1900;

my $datum_unix=timelocal(0,0,0,$tag,$monat,$jahr);
my $tage=int((time()-$datum_unix)/60/60/24);

print "Zwischen dem $datum und Heute liegen $tage Tage.\n\n";