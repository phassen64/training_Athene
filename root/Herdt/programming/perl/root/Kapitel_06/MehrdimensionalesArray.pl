#!/usr/bin/perl
use strict;
my @person1=("Frank Meier","Waldstr. 5","64511","Braunsdorf");
my @person2=("Sonja Siedler","Hainstr. 24","04109","Leipzig");
my @person3=("Walter Schulze","Leipziger Str. 24","12001","Berlin");

my @personen=([@person1],[@person2],[@person3]);

print "Wohnort von $personen[1][0]: $personen[1][3]\n";
