#!/usr/bin/perl
use strict;
my $produkt="Glasvase";
my $preis=12.9;

print "\nBestellte Anzahl: ";
anzahl $anzahl=<STDIN>;
chomp($anzahl);

printf "Gesamtpreis fr Artikel %s: %.02f EUR\n", $produkt,($preis*$anzahl);
printf "(%d Stck zu je %.02f EUR)\n",$anzahl,$preis;

$gesamtpreis=sprintf("%.2f",$preis*$anzahl);