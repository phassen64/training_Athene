#!/usr/bin/perl
use strict;
my $eintrag="";
my $groesse=0;
print "\nBitte geben Sie einen Verzeichnis an:\n";
my $verzeichnis=<STDIN>;
chomp($verzeichnis);

open(DATEI,">verzeichnisinhalt.txt") || die("Die Datei kann nicht geoeffnet werden!\n");
opendir(VERZEICHNIS,$verzeichnis) || die("Das Verzeichnis $verzeichnis kann nicht geoeffnet werden!\n");
while($eintrag=readdir(VERZEICHNIS)) {
  next if ($eintrag eq "." || $eintrag eq ".." || -d "$verzeichnis/$eintrag");
  $groesse=(-s "$verzeichnis/$eintrag")/1024;
  print DATEI "$eintrag $groesse KB\n";;
}
closedir(VERZEICHNIS);
close(DATEI);
