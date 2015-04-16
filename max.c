#include <stdio.h>

int *max(int *a, int *b);

int
main (int argc, char *argv[])
{
	int *p, i = 200, j = 10;
	
	p = max(&i, &j);
	
	printf("%d", *p);
	return 0;
}

int 
*max(int *a, int *b)
{
	return *a > *b ? a : b;
}
