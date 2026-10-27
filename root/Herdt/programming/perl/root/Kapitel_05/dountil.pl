#!/usr/bin/perl
use strict;
print "\nBitte geben Sie nacheinander die einzelnen Preise ein.\n";
print "Keine Eingabe und Return zum Beenden.\n\n";
my $preis=0;
my $anzahl=0;
my $gesamtpreis=0;
do {
  $preis=<STDIN>;
  chomp($preis);
  $gesamtpreis+=$preis;
  $anzahl++;
} until ($preis == "");

$anzahl--;
print "Der Gesamtpreis bei $anzahl Produkten betr„gt $gesamtpreis EUR.\n";
