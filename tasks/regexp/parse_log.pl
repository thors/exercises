#!/usr/bin/perl

open (LOGFILE,"<output.log") || die "Error: could not open logfile";
foreach(<LOGFILE>) {
	print $_;
}
