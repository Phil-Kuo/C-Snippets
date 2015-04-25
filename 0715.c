#include <stdio.h>

int
main (int argc, char *argv[])
{
	long factorial = 1, n, i;
	
	printf("Enter a positive number: ");
	scanf("%ld", &n);
	
	for (i = n; i > 0; i--)
	{
		factorial *= i;
	}
	
	printf("Factorial of %ld is: %ld\n", n, factorial);
	
	return 0;
}
