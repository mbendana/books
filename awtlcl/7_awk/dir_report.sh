#!/bin/bash

# dir-print: Print a directory report

ls -l /usr/bin | awk '
	BEGIN {
		print "\nDirectory Report"
		print "================\n"
	}

	NF > 9 {
		print $9, "is a symbolic link to", $NF
	}

	END {
		print "\n============="
		print "End of Report\n"
	}
'
