#include <stdio.h>

int
main (int argc, char *argv[])
{
	int m, d, y;
	
	const char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	printf("Enter a date(mm/dd/yyyy): ");
	scanf("%d/%d/%4d", &m, &d, &y );
	
	printf("You entered the date %s %d, %4d\n", month[m-1], d, y);
	
	return 0;
}
