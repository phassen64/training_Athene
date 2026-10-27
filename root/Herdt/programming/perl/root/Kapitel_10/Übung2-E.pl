#!/usr/bin/perl
use strict;

my $datei=$ARGV[0];
if (!$datei) {
  print "Loescht alle HTML-Tags in einer Datei\n\n";
  print "$0 Dateiname.html|Dateiname.htm\n";
} else {
  if ($datei!~/(.+)\.(html|htm)/i) {
    print "Bitte nur HTML-Dateien mit den Endungen .html oder .htm!\n\n";
    exit;
  }
  my $dateiname=$1;
  open(DATEI,"<$datei") || die("Datei $datei kann nicht ge”ffnet werden!");
  my @datei=<DATEI>;
  my $inhalt=join("",@datei);
  close(DATEI);
  $inhalt=~s/<[^>]+>//g;
  open(DATEI,">$dateiname.txt") || die("Datei $datei kann nicht ge”ffnet werden!");
  print DATEI $inhalt;
  close(DATEI);
}
