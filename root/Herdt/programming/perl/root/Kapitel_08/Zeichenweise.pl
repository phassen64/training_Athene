#!/usr/bin/perl
use strict;
my $zeichen="";
open(DATEI,"<beispieldatei.txt") || die("Datei kann nicht geoeffnet werden!");
while(!eof(DATEI)) {
  $zeichen=getc(DATEI);
  print $zeichen;
}
close(DATEI);
