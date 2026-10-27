#!/usr/bin/perl
package rjs;
use strict;
sub Zufall () {
  my $i = 0;
  my $z = 0;
  while ( $i < 7 ) {
	$z = int( 1 + rand(49) );
	print "$z\n";
	$i++;
  }
}
1;