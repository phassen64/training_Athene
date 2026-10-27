#!/usr/bin/perl

$datum=localtime();
$datum="Das aktuelle Datum ist: $datum";
$preis=15.99;
$anzahl=10;
$gesamtpreis=$preis*$anzahl;

print "\n";
print "$datum\n";
print "Der Gesamtpreis betr„gt $anzahl * $preis = $gesamtpreis\n";
print 'Die Variable $preis enth„lt den Wert ', $preis,"\n";

$anzahl="10 Stck";
print $anzahl, "\n";