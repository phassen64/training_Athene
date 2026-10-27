#!/usr/bin/perl
use strict;
my %person = ( "Vorname"      , "Frank", 
            "Name"         , "Meier", 
            "Strasse"      , "Waldstr. 5", 
            "Postleitzahl" , "64511",
            "Ort"          , "Braundorf",
            "Alter"        , 27);

foreach my $schluessel (keys %person) {
  print "$schluessel: $person{$schluessel}\n";
}