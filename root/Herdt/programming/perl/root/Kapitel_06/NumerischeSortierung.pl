#!/usr/bin/perl
use strict;
my @werte=(7840,9856,3223,4323,2405,8801);

my @werte_sort=sort(NumSort @werte);

sub NumSort {
 if($a < $b)
  { return -1; }
 elsif($a == $b)
  { return 0; }
 else
  { return 1; }
}

