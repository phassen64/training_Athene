#!/usr/bin/perl
use strict;
my $punkte = 0;
my $eingabe; 
do {
  print "\nBitte geben Sie die Punktzahl an: ";
  $punkte=<STDIN>;
  
  if ($punkte>100) {
    print "Eine Punktzahl gr”áer als 100 ist nicht m”glich!\n";
  } else {
    if ($punkte>91) {
      print "Note 1\n";
    } elsif ($punkte>76) {
      print "Note 2\n";
    } elsif ($punkte>61) {
      print "Note 3\n";
    } elsif ($punkte>46) {
      print "Note 4\n";
    } elsif ($punkte>31) {
      print "Note 5\n";
    } else {
      print "Note 6\n";
    }
  }
  print "\nNoch mehr Punkte auswerten? ja/nein: ";
  $eingabe=<STDIN>;
  chomp($eingabe);
} until ($eingabe ne "ja")