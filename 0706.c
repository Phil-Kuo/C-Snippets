#include <stdio.h>

int
main (int argc, char *argv[])
{
	printf("%d %d %d %d %d %d\n", (unsigned)sizeof(int), 
	(unsigned)sizeof(short), 
	(unsigned)sizeof(long), 
	(unsigned)sizeof(float), 
	(unsigned)sizeof(double), 
	(unsigned)sizeof(long double));
	return 0;
}
