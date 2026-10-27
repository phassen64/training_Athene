#!/usr/bin/perl
use strict;
my $datei="beispiel2.txt";
my @wochentage = qw(Sonntag Montag Dienstag Mittwoch Donnerstag Freitag Samstag);
my @datum=localtime(time);

open(DATEI,"+<$datei") || die("Datei $datei kann nicht geoeffnet werden!");
my @datei=<DATEI>;
my $inhalt=join("",@datei);

$inhalt =~ s/HEUTE/$wochentage[$datum[6]]/g;

seek(DATEI,0,0);
print DATEI $inhalt;
close(DATEI);
