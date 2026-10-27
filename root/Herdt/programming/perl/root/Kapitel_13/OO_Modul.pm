#!/usr/bin/perl
package OO_Modul;
use strict;
 
sub new {
 my $Obj = shift;
 my $Ref = {};
 bless($Ref,$Obj);
 return($Ref);
}
 
sub Zufall () {
  my $obj = shift;
  my $endzahl = shift;

  my $i = 0;
  my $z = 0;
  while ( $i < $endzahl ) {
	$z = int( 1 + rand(49) );
	print "\n$z";
	$i++;
  } 
}
1;
