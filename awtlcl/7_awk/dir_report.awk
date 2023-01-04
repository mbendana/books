#!/bin/awk -f

# dir-print: Print a directory report

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
