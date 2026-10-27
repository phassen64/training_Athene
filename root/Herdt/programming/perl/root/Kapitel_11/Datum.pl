#!/usr/bin/perl
use strict;
my @wochentage = qw(Sonntag Montag Dienstag Mittwoch Donnerstag Freitag Samstag);
my @monatsnamen = qw(Januar Februar März April Mai Juni Juli August September Oktober November Dezember);

my $heute=time();
my @datum=localtime($heute);

$datum[5]+=1900;
print "Heute ist $wochentage[$datum[6]], der $datum[3]. $monatsnamen[$datum[4]] $datum[5].\n";

print "Anzahl der Tage: ";
my $tage=<STDIN>;
chomp($tage);

@datum=localtime($heute+($tage*24*60*60));
$datum[5]+=1900;
print "In $tage Tagen ist $wochentage[$datum[6]], der $datum[3]. $monatsnamen[$datum[4]] $datum[5].\n";




