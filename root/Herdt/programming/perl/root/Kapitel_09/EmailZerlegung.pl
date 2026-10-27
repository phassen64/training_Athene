#!/usr/bin/perl
use strict;
print "\nBitte geben Sie eine E-Mail-Adresse ein: ";
my $email=<STDIN>;
chomp($email);

my $pos1=index($email,"@");

if ($pos1<0) {
	print "\nDie E-Mail-Adresse $email ist ungültig!\n";
	exit;
}

my $name=substr($email,0,$pos1);
my $pos2=rindex($email,".");
my $domain=substr($email,$pos1+1,$pos2-$pos1-1);
my $toplevel=substr($email,$pos2+1);

print "Die E-Mail-Adresse lautet: $email\n";
print "Sie besteht aus ".length($email)." Zeichen.\n\n";
print "Namensteil:\t\t$name\n";
print "Domain:\t\t\t$domain\n";
print "Toplevel-Domain:\t$toplevel\n";