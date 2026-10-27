#!/usr/bin/perl
use strict;
print "Bitte geben Sie ein Verzeichnis ein: ";
my $verzeichnis=<STDIN>;
chomp($verzeichnis);
print "\n";

my %dateien=OrdnerAuslesen($verzeichnis);

my $heute=time();
my @datum=localtime($heute);
$heute+=($datum[2]*60*60+$datum[1]*60);

foreach my $datei (sort keys %dateien) {
  my $tage=int(($heute-$dateien{$datei})/60/60/24);
  if ($tage==0) {
    print "$datei Letzte Aenderung war Heute.\n";
  } elsif ($tage==1) {
    print "$datei Letzte Aenderung war Gestern.\n";
  } else {
    print "$datei Letzte Aenderung war vor $tage Tagen.\n";
  }
}

sub OrdnerAuslesen {
  my $verzeichnis = $_[0];
  my %dateien;
  my @dateistat;
  opendir(VERZ,$verzeichnis) || die("Das Verzeichnis $verzeichnis kann nicht geöffnet werden!");
  while(my $eintrag=readdir(VERZ)) {
    next if ($eintrag eq "." || $eintrag eq "..");
	next if (-d "$verzeichnis/$eintrag");
	@dateistat=stat("$verzeichnis/$eintrag");
	$dateien{$eintrag}=$dateistat[9];
  }
  closedir(VERZ);
  return %dateien;
}