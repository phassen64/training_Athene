#!/usr/bin/perl
use strict;
my $einzelpreis = 13;

print "Bitte geben Sie die Anzahl der bestellten CDs ein: ";
my $anzahl=<STDIN>;
chomp($anzahl);

$gesamtpreis = $einzelpreis * $anzahl;

my if ($gesamtpreis >= 50) {
	print "Der Preis liegt ber 50 EUR: Ein Rabatt ist m”glich!\n";
} else {
	print "Der Preis liegt unter 50 EUR: Kein Rabatt m”glich!\n";
}
print "Rechnungsbetrag bei $anzahl bestellter CDs: $gesamtpreis EUR\n";
