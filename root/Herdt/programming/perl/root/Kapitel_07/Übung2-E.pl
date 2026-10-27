#!/usr/bin/perl
use strict;

binmode(STDOUT , ":encoding(cp437)" );
srand(time ^ $$);

print "Das Programm erzeugt Zahlen für das Spiel 6 aus 49:\n";

for(my $i=1;$i<=6;$i++) {
	print &LottoZahl." ";
}

sub LottoZahl {
	my $zahl;
	my %zahlen;
	do {
		$zahl=int(rand(48)+1);
	} while (exists($zahlen{$zahl}));
	$zahlen{$zahl}=1;
	return $zahl;
}