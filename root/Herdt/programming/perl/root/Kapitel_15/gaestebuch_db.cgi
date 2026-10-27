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

my $cgi=new CGI;
  
my $dbh=DBI->connect($datenquelle,$benutzer,$passwort) || 
  die("Keine Verbindung zum Datenbankserver möglich! Fehler: $DBI::errstr\n");
  
if ($cgi->param) {
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
  $dbh->do($sql) || 
    die("Fehler beim Speichern des Datensatzes!\n".$dbh->errstr);
  print $cgi->header;
  print $cgi->start_html("Gästebuch");
  
  print $cgi->p(
                "Ihr Eintrag ins Gästebuch wurde gespeichert.");  
print $cgi->end_html;  
}
