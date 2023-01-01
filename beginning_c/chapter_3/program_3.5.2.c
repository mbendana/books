// Program 3.5.2 - Using the ctype.h header to check for uppercase letters

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char letter = 0;																				// Stores a character
	printf("Enter an uppercase letter: ");									// Prompt for input
	scanf("%c", &letter);																		// Read a character

	if(isalpha(letter) && isupper(letter))
		printf("You entered an uppercase %c.\n", tolower(letter));
	else
		printf("You did not enter an uppercase letter.\n");

	return 0;
}
