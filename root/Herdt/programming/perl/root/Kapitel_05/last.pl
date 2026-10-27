#!/usr/bin/perl
use strict;
my $i = 0;
for (;;) {
  $i++;
  print "$i\n" if ($i % 3 == 0);
  last if ($i>40);
}