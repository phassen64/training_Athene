#!/usr/bin/perl
use strict;
my $zeile;
my $zlnr=0;
print "Das Programm liest eine Beispieldatei zeilenweise aus.\n\n";
open(DATEI,"beispieldatei.txt") || die("Datei kann nicht geöffnet werden!");
while($zeile=<DATEI>) {
  chomp($zeile);
  print "$zeile (".++$zlnr.")\n";
}
close(DATEI);