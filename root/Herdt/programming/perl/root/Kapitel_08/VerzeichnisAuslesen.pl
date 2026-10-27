#!/usr/bin/perl
use strict;
use Symbol;

my $startverzeichnis="f:/PerlProgramme";

&VerzeichnisAuslesen($startverzeichnis);
exit;

sub VerzeichnisAuslesen {
  my $verzeichnish=gensym();
  my $verzeichnis = $_[0];
  print "\n$verzeichnis\n";
  opendir($verzeichnish,$verzeichnis) || die("Das Verzeichnis $verzeichnis kann nicht geöffnet werden!");
  while(my $eintrag=readdir($verzeichnish)) {
    next if ($eintrag eq "." || $eintrag eq "..");
    print "$eintrag\n";
    if (-d "$verzeichnis/$eintrag") {
      &VerzeichnisAuslesen("$verzeichnis/$eintrag");
    }
  }
  closedir($verzeichnish);
}