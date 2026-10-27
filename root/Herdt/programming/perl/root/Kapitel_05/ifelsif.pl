#!/usr/bin/perl
use strict;
my $einzelpreis = 13;

print "\nBitte geben Sie die Anzahl der bestellten CDs ein: ";
my $anzahl=<STDIN>;
chomp($anzahl);

my $gesamtpreis = $einzelpreis * $anzahl;
my $rabatt;
if ($gesamtpreis < 50) {
  $rabatt = 0;
} elsif ($gesamtpreis < 75) {
  $rabatt = $gesamtpreis * 0.05;
} elsif ($gesamtpreis < 100) {
  $rabatt = $gesamtpreis * 0.1;
} else {
  $rabatt = $gesamtpreis * 0.15;
}

print "Rechnungsbetrag bei $anzahl bestellter CDs: $gesamtpreis EUR\n";
print "Es sind $rabatt EUR Rabatt möglich. Endpreis: ",$gesamtpreis-$rabatt,
      " EUR\n";
