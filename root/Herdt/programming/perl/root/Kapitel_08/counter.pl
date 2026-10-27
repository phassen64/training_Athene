#!/usr/bin/perl
use strict;
use Fcntl ':flock';
my $zeile="";
my @zeile;
my $datei="counter.txt";
my $seite="index.html";

open(DATEI,"+<$datei") || die("Datei $datei kann nicht geoeffnet werden!");
flock(DATEI, LOCK_EX);
my @daten=<DATEI>;
seek(DATEI,0,0);
foreach(@daten) {
  @zeile=split(/;/,$_);
  if ($zeile[0] eq $seite) {
    print DATEI "$zeile[0];".++$zeile[1].";\n";
  } else {
    print DATEI $_;
 }
}
flock(DATEI, LOCK_UN);
close(DATEI);
