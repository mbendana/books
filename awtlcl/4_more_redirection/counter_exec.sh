#!/bin/bash

# counter-exec: Count number of lines in a pipe

exec 3> counter.txt # Open fd 3

count=0

while read; do			# Read line from stdin
	echo "$REPLY"		# Send line to stout
	((count++))
	#printf "\b\b\b\b\b\b%06d" $count >&3
done

printf "%06d" $count >&3
echo " lines counted." >&3

exec 3>&- # Close fd 3
