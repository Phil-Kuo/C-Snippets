#include <stdio.h>

#define N 2

double inner_product(const double a[], const double b[], int n);

int
main (int argc, char *argv[])
{
	double a[N] = {1, 2}, b[N] = {3, 4};
	
	printf("%f\n", inner_product(a, b, N));
	
	return 0;
}

double
inner_product(const double a[], const double b[], int n)
{
	double sum = 0;
	int i;
	
	for (i = 0; i < n; i++)
	{
		sum += a[i] * b[i];
	}
	return sum;
}
