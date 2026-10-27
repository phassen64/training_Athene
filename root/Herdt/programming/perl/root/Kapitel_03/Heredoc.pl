#!/usr/bin/perl

$version=$];

print <<"[ENDE]";
Herdedoc-Syntax
Die heredoc-Syntax ist besonders beim Einsatz von Perl
als CGI-Sprache interessant, da so auch Teile einer Webseite
mit HTML-Befehlen ohne umst„ndliche print-Befehle ausgegeben
werden k”nnen.

Verwendete Perl-Version: $version
[ENDE]
