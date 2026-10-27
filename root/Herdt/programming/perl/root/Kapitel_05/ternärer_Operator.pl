#!/usr/bin/perl
use strict;
my $einzelpreis = 13;

print "Bitte geben Sie die Anzahl der bestellten CDs ein: ";
my $anzahl=<STDIN>;
chomp($anzahl);

my $gesamtpreis = $einzelpreis * $anzahl;

my $rabatt = ($gesamtpreis >= 50) ? $gesamtpreis * 0.05 : 0;

print "Rechnungsbetrag bei $anzahl bestellter CDs: $gesamtpreis EUR\n";
print "Es sind $rabatt EUR Rabatt m”glich. Endpreis: ",$gesamtpreis-$rabatt," EUR\n";
