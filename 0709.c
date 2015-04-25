#include <stdio.h>

int
main (int argc, char *argv[])
{
	int hour, minute;
	char flag_1, flag_2;
	
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c%c", &hour, &minute, &flag_1, &flag_2);
	if (flag_1 == 'P')
	{
		hour += 12;
	}
	printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
	return 0;
}
