# random-table.awk: Generate table of random numbers

function rand_integer(max) {
	return int(max * rand()) + 1
}

BEGIN {
	srand()
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 5; j++) {
			printf("	%d", rand_integer(99999))
		}
		printf("\n")
	}
}
