#!"F:/ActivePerl/bin/perl.exe"
use strict;
use DBI;
use CGI;
use CGI::Carp qw( fatalsToBrowser );
my $datenquelle="dbi:mysql:homepage";
my $benutzer="root";
my $passwort="";
my $mysql;
my $tabelle="gaestebuch";
  my @daten;
my $cgi=new CGI;
my $anz_pro_seite=5;
my $start_datensatz=1;
my $cgi=new CGI;
my $dbh=DBI->connect($datenquelle,$benutzer,$passwort) || die("Keine Verbindung zum Datenbankserver möglich! Fehler: $DBI::errstr\n");
my $abfrage;
print $cgi->header;
print $cgi->start_html("Gästebuch");

if ($cgi->param('text')) {
  my $text=$cgi->param('text');
  $text =~ s/\n/<br>/g;
  $text =~ s/\r//g;
  my $sql="INSERT INTO $tabelle (name,ip,email,ort,text,datum) VALUES(";
  $sql.=$dbh->quote($cgi->param('name')).",";
  $sql.=$dbh->quote($cgi->remote_addr).",";
  $sql.=$dbh->quote($cgi->param('email')).",";
  $sql.=$dbh->quote($cgi->param('ort')).",";
  $sql.=$dbh->quote($text).",";
  $sql.="now())";
  $dbh->do($sql) || die("Fehler beim Speichern des Datensatzes!\n".$dbh->errstr);
}

if (!$cgi->param('offset')) {
  $cgi->param(-name=>'offset',-value=>0);
}
&Anzeige($cgi->param('offset'));
print $cgi->end_html;
$dbh->disconnect;

sub Anzeige {
  my $start_datensatz=shift;
  $abfrage=$dbh->prepare("SELECT name,email,ort,date_format(datum,'%d.%m.%Y'),text FROM $tabelle ORDER BY datum DESC LIMIT $start_datensatz,$anz_pro_seite");
  
  $abfrage->execute || print("Fehler beim ausführen der Abfrage!\n".$dbh->errstr);
  while(@daten=$abfrage->fetchrow_array) {
    print $cgi->start_p({style=>'font-family:sans-serif'});
    print $cgi->b($cgi->a({href=>"mailto:$daten[1]"},$daten[0])." aus $daten[2] schrieb am $daten[3] folgendes:").$cgi->br;
    print $daten[4];
    print $cgi->end_p.$cgi->hr({size=>'1'});
  }
  print $cgi->start_p({style=>'font-family:sans-serif'});
  if ($start_datensatz>=$anz_pro_seite) {
    print $cgi->a({href=>$cgi->script_name."?offset=".($start_datensatz-$anz_pro_seite)},"Vorherige Seite");
    print " | ";
  }
  if ($start_datensatz<$abfrage->rows) {
    print $cgi->a({href=>$cgi->script_name."?offset=".($start_datensatz+$anz_pro_seite)},"Nächste Seite");
    print " | ";
  }
  print $cgi->a({href=>"/Kapitel_15/gaestebuch2.html"},"Neuer Eintrag ins Gästebuch");
  print $cgi->end_p;
}
