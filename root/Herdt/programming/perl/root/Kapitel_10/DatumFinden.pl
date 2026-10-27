#!/usr/bin/perl
use strict;

my $datei="beispiel.txt";
open(DATEI,"<$datei") || die("Datei $datei kann nicht geoeffnet werden!");
while(<DATEI>) {
  if (/^(\d\d)\.\1\.(201[567])\t(.+)$/) {
    print "Datum: $1.$1.$2 Ort: $3\n";
  }
}
close(DATEI);
