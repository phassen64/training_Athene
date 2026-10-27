#!/usr/bin/perl
use strict;
use DBI;
my $datenquelle="dbi:mysql:homepage";
my $benutzer="root";
my $passwort="";
my $mysql;
my @treiberliste=DBI->available_drivers();
foreach my $treiber (@treiberliste) {
	$mysql=1 if ($treiber eq "mysql");
}
if (!$mysql) {
	die("MySQL-Datenbanktreiber nicht installiert!\n");
}

my $dbh=DBI->connect($datenquelle,$benutzer,$passwort) || die("Keine Verbindung zum Datenbankserver möglich! Fehler: $DBI::errstr\n");
print "Verbindung aufgebaut...\n";
$dbh->disconnect;
print "Verbindung beendet...\n";

