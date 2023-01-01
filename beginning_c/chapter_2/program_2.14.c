// Program 2.13 - Choosing the correct type for the job 1

#include <stdio.h>

int main(void)
{
	const float Revenue_per_150 = 4.5f;
	unsigned short JanSold = 23500;												// Stock sold in January
	unsigned short FebSold = 19300;												// Stock sold in February
	unsigned short MarSold = 21600;												// Stock sold in March
	float RevQuarter = 0.0f;											// Sales for the quarter

	unsigned long QuarterSold = JanSold + FebSold + MarSold; // Calculate quarterly total

	// Output monthly sales and total for the quarter and output it
	printf("Stock sold in\nJan: %d\nFeb: %d\nMar: %d\n", JanSold, FebSold, MarSold);
	printf("Total stock sold in first quarter: %ld.\n", QuarterSold);

	// Calculate the total revenue for the quarter and output it
	RevQuarter = QuarterSold / 150 * Revenue_per_150;
	printf("Sales revenue this quarter is: $%.2f.\n", RevQuarter);
	return 0;
}
