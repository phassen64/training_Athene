#!/usr/bin/perl

my $preis=15.99;
my $anzahl=10;
my $gesamtpreis_global;

&Gesamtpreis;
print "Globale Variable \$gesamtpreis_global=$gesamtpreis_global\n";
print "Lokale Variable \$gesamtpreis_lokal=$gesamtpreis_lokal\n";
sub Gesamtpreis {
  my $gesamtpreis_lokal=$preis*$anzahl;
  print "Lokale Variable \$gesamtpreis_lokal=$gesamtpreis_lokal\n";
  $gesamtpreis_global=$gesamtpreis_lokal;
}