/*Prints a table of squares using a for statement.*/

#include <stdio.h>

int
main (int argc, char *argv[])
{
	int i, n;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i += 1)
	{
	    printf("%-30d%30d\n", i, i * i);
	}
	
	return 0;
}
