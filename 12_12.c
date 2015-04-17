#include <stdio.h>

#define	N 5

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int
main (int argc, char *argv[])
{
	int a[N] = {1, 2, 4, 6, 10}, largest, second_largest;

	find_two_largest(a, N, &largest, &second_largest);
	
	printf("%d %d\n", largest, second_largest);
	return 0;
}

/************************************************************
 *find_two_largest: 找出数组a中最大的两个数。					*
 ************************************************************/
 
void
find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	int *p;
	*largest = *second_largest = *a;
	
	for (p = a; p < a + n; p += 1)
	{
		if (*p > *largest)
		{
			*largest = *p;
			*second_largest = *largest;
		}
		else if (*p > *second_largest)
		{
			*second_largest = *p;
		}
	}
}
