// Exercise 3.2 - Program to output day, month and year in 1st January 2022 format

#include <stdio.h>

int main(void)
{
	enum Month {January = 1, February, March, April, May, June, July, August, September, October, November, December};

	int day = 0;
	char dayText[] = "someday";
	int month = 0;
	char monthText[] = "somemonth";
	int year = 0;

	printf("Enter a data in the format: day, month and year: ");
	scanf("%d %d %d", &day, &month, &year);

	switch(month)
	{
		case 1:
			monthText = "January";
			break;
		case 2:
			monthText = "February";
			break;
		case 3:
			monthText = "March";
			break;
		case 4:
			monthText = "April";
			break;
		case 5:
			monthText = "May";
			break;
		case 6:
			monthText = "June";
			break;
		case 7:
			monthText = "July";
			break;
		case 8:
			monthText = "August";
			break;
		case 9:
			monthText = "September";
			break;
		case 10:
			monthText = "October";
			break;
		case 11:
			monthText = "November";
			break;
		case 12:
			monthText = "December";
			break;
		default:
			monthText = "Undefined";
			break;
	}

	if(day == 1 || day == 21 || day == 31)
	{
		printf("You entered %s %dst %d\n", monthText, day, year);
	}
	else if(day == 2 || day == 22)
	{
		printf("You entered %s %dnd %d\n", monthText, day, year);
	}
	else if(day == 3 || day == 23)
	{
		printf("You entered %s %drd %d\n", monthText, day, year);
	}
	else
	{
		printf("You entered %s %dth %d\n", monthText, day, year);
	}

	return 0;
}
