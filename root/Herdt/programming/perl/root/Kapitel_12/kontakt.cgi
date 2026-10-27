#!"F:/xampp/perl/bin/perl.exe"
use strict;
my @pflichtfelder=qw(vorname name email);
my $datei="kontakt.csv";

print "Content-type: text/html\n\n";
my %formular=&Formular_Auswerten;

foreach my $pflicht (@pflichtfelder) {
  if (!$formular{$pflicht}) {
    print "<h3><font face=\"Arial\">Fehler</font></h3>";
	print "<p><font face=\"Arial\">Sie haben vergessen, Ihren Vornamen, Nachnamen und Ihre E-Mail-Adresse anzugeben.</font></p>";
	print "<p><font face=\"Arial\"><a href=\"/kontakt.html\">Bitte gehen Sie noch einmal zurück...</a></font></p>";
	exit;
  }
}

open(DATEI,">>$datei") || die("Datei $datei kann nicht geoeffnet werden!");
print DATEI "$formular{'vorname'};$formular{'name'};$formular{'strasse'};$formular{'ort'};$formular{'email'}\n";
close(DATEI);

print "<h3><font face=\"Arial\">Vielen Dank, $formular{'vorname'} $formular{'name'}!</font></h3>";
print "<p><font face=\"Arial\">Wir haben Ihre Daten gespeichert und wünschen Ihnen noch einen angenehmen Tag.</font></p>";


sub Formular_Auswerten {
  my ($formulardaten, @wertepaare, $wertepaar, %formular);

  if (lc($ENV{'REQUEST_METHOD'}) eq "get") {
    $formulardaten=$ENV{'QUERY_STRING'};
  } else {
    read(STDIN, $formulardaten, $ENV{'CONTENT_LENGTH'});
  }
     my $key; 
  my $value;
  my @wertepaare=split(/&/,$formulardaten);
  foreach my $wertepaar (@wertepaare) {
    ($key, $value)=split(/=/,$wertepaar);
    $key=&URL_Decode($key);
    $value=&URL_Decode($value);
    $formular{$key}=$value;
  }
  return %formular;
}

sub URL_Decode {
  my $wert=shift;
  $wert=~s/\+/ /g;
  $wert=~s/%(..)/pack("c",hex($1))/ge;
  return $wert;
}
