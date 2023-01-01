// Program 4.1 - List 10 integers

#include <stdio.h>

int main(void)
{
	int count = 1;
	for(; count <= 10; ++count)
	{
		printf("%d\n", count);
	}

	printf("\nAfter the loop, variable count has the value %d\n", count);
	return 0;
}
