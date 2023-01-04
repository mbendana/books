# file_types.awk: Sorted list of file name extensions and counts

BEGIN {FS = "."}

{types[$NF]++}

END {
	for (i in types) {
		printf("%6d %s\n", types[i], i) | "sort -nr"
	}
}
