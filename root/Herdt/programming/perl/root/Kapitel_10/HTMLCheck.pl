#!/usr/bin/perl
use strict;
my $datei=$ARGV[0];
if (!$datei) {
	print "Prft Datei auf enthaltene HTML-Tags\n\n";
	print "$0 Dateiname\n";
} else {
	open(DATEI,"<$datei") || die("Datei $datei kann nicht geoeffnet werden!");
	my @datei=<DATEI>;
	my $inhalt=join("",@datei);
	if ($inhalt=~/<[^>]+>/) {
		print "Die Datei $datei enth„lt HTML-Tags.\nEs scheint sich um eine HTML-Datei zu handeln.\n\n";
	} else {
		print "Die Datei $datei enth„lt keine HTML-Tags.\n\n";
	}
	close(DATEI);
}
