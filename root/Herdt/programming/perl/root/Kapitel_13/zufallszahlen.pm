#!/usr/bin/perl
use strict;

my $i = 0;
my $z = 0;
while ( $i < 7 ) {
	$z = int( 1 + rand(49) );
	print "$z\n";
	$i++;
}
1;