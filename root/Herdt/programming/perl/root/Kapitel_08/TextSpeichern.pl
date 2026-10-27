#!/usr/bin/perl
use strict;
my $datei="eingaben.txt";
my $zlnr=0;
my $text="";
print "Das Programm schreibt Tastatureingaben in eine Datei.\n\n";
open(DATEI,">$datei") || die("Datei $datei kann nicht geöffnet werden!");
do {
  print "Bitte Text eingeben (Ende – kein Text):\n";
  $text=<STDIN>;
  if ($text ne "\n") {
    print DATEI ++$zlnr.": $text";
  }
} while($text ne "\n");
close(DATEI);