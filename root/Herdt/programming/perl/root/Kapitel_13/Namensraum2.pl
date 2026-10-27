#!/usr/bin/perl
use strict;
my $text = "Namensraum main.\n";
print $text;
 
package rjs;
$text = "Namensraum rjs.\n";
print $text;
 
package main;
print $text;



