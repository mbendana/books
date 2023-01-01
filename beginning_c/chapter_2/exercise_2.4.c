// Exercise 2.4 - Prompt the user for weekly pay and hours worked
// output the average pay per hour.

// This program is not complete.
// The cents result in the last printf function is incorrect.

#include <stdio.h>

int main(void)
{
	float weekly_pay = 0.F;
	float hours_worked = 0.F;
	float pay_per_hour = 0.F;

	printf("Enter your weekly pay in dollars: $");
	scanf("%f", &weekly_pay);
	printf("Enter the hours worked per week: ");
	scanf("%f", &hours_worked);
	pay_per_hour = weekly_pay / hours_worked;

	printf("Your average pay per hour is: $%f and %d cents.\n", pay_per_hour, (int)pay_per_hour % 100);

	return 0;
}
