#!"F:/xampp/perl/bin/perl.exe"
use strict;
print "Content-type: text/html\n\n";
my %formular=&Formular_Auswerten;
foreach my $name (keys %formular) {
  print "Das Formularelement <b>$name</b> besitzt den Wert <b>$formular{$name}</b>.<br>";
}

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
