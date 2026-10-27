#!/usr/bin/perl
use strict;
my %farben = (green  => "grn",
           blue   => "blau",
           yellow => "gelb",
           red    => "rot",
           brown  => "braun");

my @farben_sort = sort(keys(%farben));
my $schluessel;
for (my $i=0; $i<=$#farben_sort; $i++) {
  $schluessel = $farben_sort[$i];
  print "$schluessel = $farben{$schluessel}\n";
}
