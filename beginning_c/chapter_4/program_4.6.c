// Program 4.6 - The almost indefinite loop that computes an average

#include <stdio.h>
#include <ctype.h>							// For tolower() function

int main(void)
{
	char answer = 'N';						// Decision to continue the loop
	double total = 0.0;						// Total of values entered
	double value = 0.0;						// Value entered
	unsigned int count = 0;				// Number of values entered

	printf("\nThis program calculates the average of"
	" any number of values.\n");

	for(;;)												// Indefinite loop
	{
		printf("\nEnter a value: ");	// Prompt for the next value
		scanf(" %lf", &value);				// Read the next value
		total += value;								// Add value of total
		++count;											// Increment count of values

		// Check for more input
		printf("Do you want to enter another value? (Y or N): ");
		scanf(" %c", &answer);				// Read response Y or N

		if(tolower(answer) == 'n')		// Look for any sign of "no"
			break;
	}

	// Output the average to two decimal places
	printf("\nThe average is %.2lf\n\n", total / count);

	return 0;
}
