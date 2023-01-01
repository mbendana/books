// Program 3.10 - EXercising bitwise operators

#include <stdio.h>

int main(void)
{
	unsigned int original = 0XABC;
	unsigned int result = 0;
	unsigned int mask = 0XF;												// Rightmost four bits

	printf("\nOriginal = %X", original);

	// Insert first digit in result
	result |= original & mask;											// Put righmost 4 bits from original in result

	// Get second digit
	original >>= 4;																	// Shift original right four positions
	result <<= 4;																		// Make room for neXt digit
	result |= original & mask;											// Put rightmost 4 bits from original in result

	/* Get third digit */
	original >>= 4;																	// Shift original right four positions
	result <<= 4;																		// Make room for neXt digit
	result |= original & mask;											// Put rightmost 4 bits from original in result

	printf("\tResult = %X\n", result);

	return 0;
}
