#!/usr/bin/perl
use strict;
use integer;
my $a = 5;
my $b = 2;
print $a / $b . "\n";
no integer;
print $a / $b;