#!/usr/bin/perl
use strict;
use OO_Modul;
 
my $obj = OO_Modul -> new();
print "Ziehung von 3 Zahlen:\n";
$obj->Zufall(3);
print "\nNeue Ziehung von 4 Zahlen:\n";
$obj->Zufall(4);