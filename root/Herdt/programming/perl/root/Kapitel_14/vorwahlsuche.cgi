#!"F:/xampp/perl/bin/perl.exe"
use strict;
use CGI;
use CGI::Carp qw( fatalsToBrowser );
my $datei="vorwahlen.txt";

my $cgi = new CGI;
my $zeile;
my $vorwahl;
if (!$cgi->param) {
  print $cgi->redirect('/vorwahlsuche.html');
} else {
  print $cgi->header;
  my $stadt=$cgi->param('stadt');
  open(DATEI,"<$datei") || die("Datei $datei kann nicht geöffnet werden!");
  while($zeile=<DATEI>) {
    if ($zeile=~/^$stadt;(\d+)$/i) {
      $vorwahl=$1;
    }
  }
  print <<ENDE;
<html><head>
<title>Vorwahlsuche</title>
</head><body>
<font face="Arial">
<h3>Suchergebnis</h3>
ENDE
  if ($vorwahl) {
    print "<p>Die Vorwahl von <b>$stadt</b> lautet <b>$vorwahl</b>.</p>";
  } else {	 
    print "<p>Die Stadt <b>$stadt</b> ist nicht in der Datenbank.</p>";
  }
  print "</font></body></html>";
}


