#include <stdio.h>


#define NUM_ROWS 4
#define NUM_COLS 5  
int
main (int argc, char *argv[])
{
	int a[NUM_ROWS][NUM_COLS] = {{1, 2, 3, 4, 5},{3, 6, 7, 9, 30}}, (*p)[NUM_COLS];
	int *q;
	
	for (p = a; p < &a[NUM_ROWS]; p += 1)
	{
		(*p)[2] = 0;
	}
	
	for (q = &a[0][0]; q <= &a[NUM_ROWS-1][NUM_COLS-1]; q += 1)
	{
		printf("%d ", *q);
	}
	printf("\n");
	return 0;
}
