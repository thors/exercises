#!/usr/bin/perl

open (LOGFILE,"<output.log") || die "Error: could not open logfile";
foreach(<LOGFILE>) {
	if (($errn)=$_=~/error:\s*([\d]+)/i) {
		print "Error," . $errn . "\n";
	}
}
