#!/usr/bin/perl

$datum=localtime;
$name="Herb Kater";

print $datum;
print "\n";
print "Der Name lautet \"$name\".\n";
print 'Der Name lautet "', $name, '".', "\n";
print 'Der Name lautet \"$name\".\n';
