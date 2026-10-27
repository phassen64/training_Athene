#!/usr/bin/perl
use strict;

use HTMLGen;
 
my $html = HTMLGen -> new();
$html->Beginn("OO-Perl");
$html->Text("Generierter Texx!");
$html->Ende();