// Exercies 3.1 - Program to convert temperature from Celsius to Fahrenheit and viceversa

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool celsius = false;
	bool fahrenheit = false;
	int optionValue = 0;
	float tempValue = 0.0;

	printf("Choose 1 if you want to convert from Celsius to Fahrenheit.\nChoose 2 if you want to convert Fahrenheit to Celsius\n");
	scanf("%d", &optionValue);

	printf("Enter the temperature value you want to convert to: ");
	scanf("%f", &tempValue);

	switch(optionValue)
	{
		case 1:
			printf("You chose to convert temperature %.0f from Celsius to Fahrenheit\n", tempValue);
			printf("The conversion is %.0f\n", tempValue * 1.8 + 32);
			break;

		case 2:
			printf("You chose to convert temperature %.0f from Fahrenheit to Celsius\n", tempValue);
			printf("The conversion is %.0f\n", (tempValue - 32) * 5 / 9);
			break;

		default:
			printf("\t\aYour selection was incorrect\n");
			break;
	}

	return 0;
}
