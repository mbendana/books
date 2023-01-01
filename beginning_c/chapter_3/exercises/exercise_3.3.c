// Exercise 3.3 - Program to output price for quantity including either 10 or 15 percent discount

#include <stdio.h>

int main(void)
{
	int unitPrice = 5;		// Unit price in dollars
	float quantity = 0.0;			// User's input: quantity

	printf("Enter the quantity you want to buy: ");
	scanf("%f", &quantity);

	printf("You have to pay $%.2f.\n", quantity > 50 ? quantity * (unitPrice - (unitPrice * 0.15)) : quantity > 30 ? quantity * (unitPrice - (unitPrice * 0.1)) : quantity * unitPrice);

	return 0;
}
