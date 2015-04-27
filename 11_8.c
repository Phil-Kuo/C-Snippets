#include <stdio.h>

#define N 5

int *find_largest(int a[], int n);

int
main (int argc, char *argv[])
{
	int a[N] = {1, 21, 4, 6, 10}, largest;
	
	printf("%d\n", *find_largest(a, N));
	return 0;
}

int
*find_largest(int a[], int n)
{
	int *largest, i;
	
	largest = &a[0];
	
	for (i = 1; i < n; i++)
	{
		if (*largest < a[i])
		{
			*largest = a[i];
		}
	}
	
	return largest;
}
