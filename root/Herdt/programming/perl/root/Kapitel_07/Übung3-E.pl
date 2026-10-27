#!/usr/bin/perl
use strict;
binmode(STDOUT , ":encoding(cp437)" );

my @staedte=qw(Berlin Leipzig Hannover Rostock Stuttgart Frankfurt);

print "Bitte geben Sie einen Städtenamen ein: ";
my $stadt=<STDIN>;
chomp($stadt);
if (PruefeStadt($stadt,\@staedte)) {
	print "$stadt ist in der Liste enthalten\n";
} else {
	print "$stadt ist nicht in der Liste enthalten\n";
}

sub PruefeStadt {
	my ($stadt);
	$stadt=$_[0];
	my @liste=@{$_[1]};
	foreach(@liste) {
		if (lc($_) eq lc($stadt)) {
			return 1;
		}
	}
	return 0;
}