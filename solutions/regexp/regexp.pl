#!/usr/bin/env perl

use 5.008;
use strict;
use warnings;

open (LOGFILE,"<output.log") || die "Error: could not open logfile";

foreach(<LOGFILE>) {
    my $errn;
    if (($errn)=$_=~/error:\s*([\d]+)/i) {
	print "Error,${errn}\n";
    }
}
