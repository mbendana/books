// Exercise 2.3 - Prompt for product type (Standard or Deluxe)
// and output price depending on product type and quantity.

#include <stdio.h>

int main(void)
{
	short standard_type = 1;
	short deluxe_type = 2;
	float standard_price = 3.50F;
	float deluxe_price = 5.50F;
	short type;
	short quantity;

	printf("Enter the product type you want to buy (1 = Standard, 2 = Deluxe): ");
	scanf("%hd", &type);
	printf("Enter the quantity you would like to buy: ");
	scanf("%hd", &quantity);
	
	if(type == standard_type)
	{
		printf("You entered quantity %d of product type %d (Standard), the price is: $%.2f ($%.2f each).\n", quantity, type, standard_price * quantity, standard_price);
	}
	else if (type == deluxe_type)
	{
		printf("You entered quantity %d of product type %d (Deluxe), the price is: $%.2f ($%.2f each).\n", quantity, type, deluxe_price * quantity, deluxe_price);
	}
	else
	{
		printf("Type %d is not recognized.\n", type);
	}

	return 0;
}
