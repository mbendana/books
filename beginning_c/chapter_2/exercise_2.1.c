// Exercies 2.1 - Prompt user for distance in inches and
// outputs it in yards.

#include <stdio.h>

int main(void)
{
	float dist_inches = 0.F;
	float dist_yards = 0.F;
	float dist_feet = 0.F;

	printf("Enter a distance in inches: ");
	scanf("%f", &dist_inches);
	dist_feet = dist_inches / 12.0;
	dist_yards = dist_feet / 3;

	printf("The distance in inches was %.0f.\n", dist_inches);
	printf("The distance in feet was %.2f.\n", dist_feet);
	printf("The distance in yards was %.2f.\n", dist_yards);

	return 0;
}
