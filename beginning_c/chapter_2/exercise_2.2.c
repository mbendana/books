// Exercise 2.2 - Prompt for length and width of a room
// and output floor area in square yards.

#include <stdio.h>

int main(void)
{
	float room_len_feet = 0.F;
	float room_len_inch = 0.F;
	float room_wid_feet = 0.F;
	float room_wid_inch = 0.F;
	float area_yards = 0.F;

	printf("Enter the length of the room in feet: ");
	scanf("%f", &room_len_feet);
	printf("Enter the length of the room in inches: ");
	scanf("%f", &room_len_inch);
	printf("Enter the width of the room in feet: ");
	scanf("%f", &room_wid_feet);
	printf("Enter the width of the room in inches: ");
	scanf("%f", &room_wid_inch);

	room_len_feet = room_len_feet + (room_len_inch / 12);
	room_wid_feet = room_wid_feet + (room_wid_inch / 12);

	printf("The room length in feet is: %.2f.\n", room_len_feet);
	printf("The room width in feet is: %.2f.\n", room_wid_feet);

	area_yards = (room_len_feet / 3) * (room_wid_feet / 3);

	printf("The square area of the room measured in yards is: %.2f.\n", area_yards);

	return 0;
}

