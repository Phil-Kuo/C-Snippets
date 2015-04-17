#include <stdio.h>

#define N 4

int find_largest(int *a, int n);

int
main (int argc, char *argv[])
{
	int a[] = {1, 2, 3, 56};
	
	printf("largest: %d\n", find_largest(a, N));
	
	return 0;
}

int
find_largest(const int *a, int n)
{
	int *p, max = *a;
	
	for (p = a; p < a + n; p++)
	{
		if (max < *p )
		{
			max = *p;
		}
	}
	return max;
}
