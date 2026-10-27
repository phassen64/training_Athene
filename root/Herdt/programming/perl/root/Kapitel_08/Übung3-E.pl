#!/usr/bin/perl
use strict;
use Symbol;

print "\nBitte geben Sie den Teil eines Dateinamens ein: ";
my $name=<STDIN>;
chomp($name);
print "Bitte geben Sie einen Verzeichnisnamen ein: ";
my $startverzeichnis=<STDIN>;
chomp($startverzeichnis);
print "\n";

my $count=0;
&VerzeichnisAuslesen($startverzeichnis,$name);
print "\nEs wurden $count Dateien gefunden\n";

sub VerzeichnisAuslesen {
  my $verzeichnish=gensym();
  my $verzeichnis = $_[0];
  my $name=$_[1];
  opendir($verzeichnish,$verzeichnis) || die("Ddas Verzeichnis $verzeichnis kann nicht geöffnet werden!");
  while(my $eintrag=readdir($verzeichnish)) {
    next if ($eintrag eq "." || $eintrag eq "..");
    if(index(lc($eintrag),lc($name))>0 && !(-d "$verzeichnis/$eintrag")) {
       print "$verzeichnis/$eintrag\n";
       $count++;
    }   
    if (-d "$verzeichnis/$eintrag") {
      &VerzeichnisAuslesen("$verzeichnis/$eintrag",$name);
    }
  }
  closedir($verzeichnish);
}