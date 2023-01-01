// Program 4.5 - Summing integers backward

#include <stdio.h>

int main(void)
{
	unsigned long long sum = 0LL;						// Stores the sum of the integers
	unsigned int count = 0;								// The number of integers to be summed
	unsigned long long sum2 = 0LL;

	// Read the number of integers to be summed
	printf("\nEnter the number of integers you want to sum: ");
	scanf(" %u", &count);

	// Sum integers from count to 1
	for(unsigned int i = count; i >= 1; sum += i--);

	sum = (1.0L / 2.0L) * count * (count + 1);
	printf("\nThe total of the first %u numbers is %llu\n", count, sum);
	printf("\nSecond sum is: %llu\n", sum);

	return 0;
}
