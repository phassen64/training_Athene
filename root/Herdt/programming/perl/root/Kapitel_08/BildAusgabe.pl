#!/usr/bin/perl
use strict;
my $datei="button.gif";
my $bild;
open(BILD, "<$datei");
binmode(BILD);
my $groesse= -s $datei;
read(BILD,$bild,$groesse);
close(BILD);

binmode(STDOUT);
print "Content-type: image/gif\n\n";
print $bild;