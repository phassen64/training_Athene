#!/usr/bin/perl
package HTMLGen;
use strict;
 
sub new {
 my $Obj = shift;
 my $Ref = {};
 bless($Ref,$Obj);
 return($Ref);
}
 
sub Beginn {
  my $Obj = shift;
  my $Titel = shift;
  print "Content-type: text/html\n\n";
  print "<html><head><title>$Titel</title></head><body>\n";
}
 
 
sub Text {
  my $Obj = shift;
  my $Text = shift;
  print "<div>$Text</div>\n";
}
 
sub Ende {
  my $Obj = shift;
  print "</body></html>\n";
}
 
1;