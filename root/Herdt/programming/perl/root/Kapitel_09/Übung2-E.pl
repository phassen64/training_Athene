#!/usr/bin/perl
use strict;
my  $zahl=0;
do {
  print "\nBitte geben Sie eine Zahl ein: ";
  $zahl=<STDIN>;
  chomp($zah);

  printf "Hexadezimalwert: %X\n",$zahl;
  printf "Oktalwert: %o\n",$zahl;
  printf "Bin„rwert: %b\n",$zahl;
} until ($zahl==0);