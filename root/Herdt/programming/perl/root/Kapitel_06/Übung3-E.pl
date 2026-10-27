#!/usr/bin/perl
use strict;
my $ort ;
my $eingabe;
binmode(STDOUT , ":encoding(cp437)" );
my %vorwahlen = ( "Berlin"     => "030",
               "Hamburg"    => "040",
               "München"    => "089",
               "Stuttgart"  => "0711",
               "Frankfurt"  => "069",
               "Leipzig"    => "0341",
               "Düsseldorf" => "0211",
               "Köln"       => "0221",
               "Rostock"    => "0381",
               "Dresden"    => "0351",
               "Wiesbaden"  => "0611",
               "Hannover"   => "0511",
               "Erfurt"     => "0361");

print "Die Vorwahlen folgender Städte sind gespeichert:\n";
foreach $ort (sort keys %vorwahlen) {
  print "$ort ";
}

do {
  print "\n\nBitte gewünschten Ort eingeben: ";
  $ort=<STDIN>;
  chomp($ort);
  if (exists($vorwahlen{$ort})) {
    print "\nDie Vorwahl für $ort lautet $vorwahlen{$ort}.";
  } else {
    print "\nDer Ort ist nicht gespeichert.";
  }

  print "\nWeitere Vorwahl suchen? (ja/nein) ";
  $eingabe=<STDIN>;
  chomp($eingabe);
} while ($eingabe eq "ja");
