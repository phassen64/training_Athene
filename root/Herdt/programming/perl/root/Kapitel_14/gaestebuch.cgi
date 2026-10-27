#!"F:/xampp/perl/bin/perl.exe"
use strict;
use CGI;
use CGI::Carp qw( fatalsToBrowser );
my $datei="gaestebuch.txt";
my $cgi = new CGI;

print $cgi->header;

if ($cgi->param) {
  my @datum=localtime();
  my $datum=sprintf("%02d.%02d.%04d",$datum[3],$datum[4]+1,$datum[5]+1900);
  open(DATEI,">>$datei") || die("Datei $datei konnte nicht geöffnet werden!");
  print DATEI $cgi->param('name')."|$datum|".$cgi->param('text')."\n";
  close(DATEI);
}

print $cgi->start_html('Gästebuch');
print $cgi->h3({style=>'font-family:sans-serif'},'Eintrag ins Gästebuch');
print $cgi->startform('POST',$cgi->script_name);
print $cgi->b('Ihr Name: ').$cgi->br;
print $cgi->textfield(-name=>'name',-size=>40).$cgi->br;
print $cgi->b('Ihre Nachricht:').$cgi->br;
print $cgi->textarea(-name=>'text',-rows=>'6',-cols=>'30').$cgi->br;
print $cgi->br.$cgi->submit(-value=>'Eintrag einfügen');
print $cgi->endform;
print $cgi->hr({size=>'1'});
my $zeile;
my @daten;
open(DATEI,"<$datei") || die("Datei $datei konnte nicht geöffnet werden!");
while ($zeile=<DATEI>) {
  @daten=split(/\|/,$zeile);
  print $cgi->start_p({style=>'font-family:sans-serif'});
  print $cgi->b("$daten[0] schrieb am $daten[1] folgendes:").$cgi->br;
  print $daten[2];
  print $cgi->end_p.$cgi->hr({size=>'1'});
}
close(DATEI);

print $cgi->end_html;



