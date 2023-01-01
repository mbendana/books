// Program 3.11 - A Calculator

#include <stdio.h>

int main(void)
{
	double number1 = 0.0;														// First operand, value a decimal number
	double number2 = 0.0;														// Second operand, value a decimal number
	char operation = 0;															// Operation: must be +, -, *, / or %

	restart:;
	printf("\nEnter the calculation:\n");
	scanf("%lf %c %lf", &number1, &operation, &number2);

	switch(operation)
	{
		case '+':							// No checks necessary for add
			printf("= %.2lf\n", number1 + number2);
			break;

		case '-':							// No checks necessary for subtract
			printf("= %.2lf\n", number1 - number2);
			break;

		case '*':							// No checks necessary for multiply
			printf("= %.2lf\n", number1 * number2);
			break;

		case '/':							// Check second operand for zero
			if(number2 == 0)
			{
				printf("\n\t\aDivision by zero error!\n");
			}
			else
			{
				printf("= %.2lf\n", number1 / number2);
			}
			break;

		case '%':							// Check second operand for zero
			if((long)number2 == 0)
			{
				printf("\n\t\aDivision by zero error!\n");
			}
			else
			{
				printf("= %ld\n", (long)number1 % (long)number2);
			}
			break;

		default:							// Operation is invalid if we get to here
			printf("\n\t\aIllegal operation!\n");
			break;
	}

	char userRepeat = 0;

	printf("Do you want to do another calculation?\n'Y' or 'y' for 'Yes'/'yes', 'N' or 'n' for 'No'/'no'\n");
	scanf(" %c", &userRepeat);

	switch(userRepeat)
	{
		case 'Y': case 'y':
			goto restart;
			break;
		case 'N': case 'n':
			return 0;
			break;
		default:
			printf("\t\aYou entered %c. Option not recognized! Please, use 'Y', 'y', 'N' or 'n'.\n", userRepeat);
			break;
	}

	return 0;
}
