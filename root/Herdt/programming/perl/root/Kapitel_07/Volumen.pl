#!/usr/bin/perl
use strict;
my $werte;
my @werte;
my $volumen;
&Eingabe;
&Berechnung;
&Ausgabe;

sub Eingabe {
  print "Volumen-Berechnung eines Quaders\n\n";
  print "Bitte geben Sie H”he, Breite und Tiefe in m ein. ";
  print "Trennen Sie die Werte durch ein Leerzeichen.\n";
  $werte=<STDIN>;
  chomp($werte);
  @werte=split(/ /,$werte);
}

sub Berechnung {
  $volumen=$werte[0]*$werte[1]*$werte[2];
}

sub Ausgabe {
  print "Das Volumen betr„gt $volumen mü\n\n";
}
