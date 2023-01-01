// Program 3.7.2 - A Confused recruiting policy, version 2.

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age = 0;																		// Age of the applicant
	int college = 0;																// Code for college attended
	int subject = 0;																// Code for subject studied
	bool interview = false;													// True for accept, false for reject
	int Harvard = 1;
	int Yale = 2;
	int Other = 3;
	int Chemistry = 1;
	int Economics = 2;

	// Get data on the applicant
	printf("\nWhat college? (1 for Harvard, 2 for Yale, 3 for Other): ");
	scanf("%d", &college);
	printf("\nWhat subject? (1 for Chemistry, 2 for Economics, 3 for Other): ");
	scanf("%d", &subject);
	printf("\nHow old is the applicant? ");
	scanf("%d", &age);

	// Check out the applicant
	interview = (college != Yale && subject == Chemistry && age > 25 ) ||
		(college == Yale && subject == Chemistry) ||
		(college == Harvard && subject == Economics && age <= 28) ||
		(college == Yale && subject != Chemistry && age > 25);

	// Output decision for interview
	if(interview)
		printf("\nGive 'em an interview.\n");
	else
		printf("\nReject 'em!\n");

	return 0;
}
