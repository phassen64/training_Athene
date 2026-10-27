#!/usr/bin/perl
use strict;
my $a = 1;
$b = 2;
our $c = 3;

print "Hauptebene:\t\t\$a = $a,\t\t\$b = $b,\t\t\$c = $c\n";
sub1();

sub sub1 {
	$a = -1;
	local $b = -2;
	my $c = -3;
	print "Unterprogramm 1:\t\$a = $a,\t\$b = $b,\t\$c = $c\n";
	sub2();
}

sub sub2 {
	print "Unterprogramm 2:\t\$a = $a,\t\$b = $b,\t\$c = $c\n";

}
print "Hauptebene:\t\t\$a = $a,\t\$b = $b,\t\t\$c = $c\n";