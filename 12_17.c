#include <stdio.h>

#define	LEN 4

int sum_two_dimensional_array(const int a[][LEN], int n);

int
main (int argc, char *argv[])
{
	const int a[2][LEN] = {{1, 2, 3, 4}, {1, 2, 3, 4}};
	
	printf("%d\n", sum_two_dimensional_array(a, 2));
	return 0;
}


int 
sum_two_dimensional_array(const int a[][LEN], int n)
{
	int sum = 0;
	const int *p;
	
	for (p = *a; p <= *(a + n - 1) + LEN -1; p += 1)
	{
		sum += *p;
	}
	
	return sum;
}
