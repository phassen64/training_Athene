#!/usr/bin/perl
use strict;

my $werte;

&Eingabe;
&Ausgabe;

sub Eingabe {
  print "Geben Sie eine beliebige Anzahl Zahlen ein.\n\n";
  print "Trennen Sie die Zahlen jeweils durch ein Leerzeichen.\n";
  $werte=<STDIN>;
  chomp($werte);
}

sub Ausgabe {
  print "Die kleinste Zahl ist ".&Kleinste($werte);
}

sub Kleinste {
  my $kleinste;
  my @werte;
  @werte=split(/ /,$_[0]);
  foreach(@werte) {
    if (!$kleinste) {
      $kleinste=$_;
    } elsif ($_<$kleinste) {
      $kleinste=$_;
    }
  }
  return $kleinste;
}