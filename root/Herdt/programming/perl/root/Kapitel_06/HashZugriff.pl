#!/usr/bin/perl
use strict;
my %person = ( Vorname      => "Frank", 
            Name         => "Meier", 
            Strasse      => "Waldstr. 5", 
            Postleitzahl => "64511",
            Ort          => "Braundorf",
            Alter        => 27);

print "\n$person{Vorname} $person{Name} wohnt in $person{Ort}.\n";

my $schluessel="Strasse";
print "$person{$schluessel}\n";


