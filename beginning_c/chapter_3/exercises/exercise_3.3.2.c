// Exercise 3.3 - Program to output price for quantity including either 10 or 15 percent discount

#include <stdio.h>

int main(void)
{
	float unitPrice = 5.0;		// Unit price in dollars
	float quantity = 0.0;			// User's input: quantity

	printf("Enter the quantity you want to buy: ");
	scanf("%f", &quantity);
	//float unitPriceTen = unitPrice -= unitPrice * 0.1;
	//float unitPriceFif = unitPrice -= unitPrice * 0.15;
	//printf("%f\n", unitPriceTen); 
	//printf("%f\n", unitPriceFif); 
	printf("You have to pay $%.2f.\n", quantity > 50 ? quantity * (unitPrice -= (unitPrice * 0.15)) : quantity > 30 ? quantity * (unitPrice -= (unitPrice * 0.1)) : quantity * unitPrice);

	return 0;
}
