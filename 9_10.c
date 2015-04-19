#include <stdio.h>

int max(int a[], int n);
int average(int a[], int n);
int num_positive(int a[], int n);

int
main (int argc, char *argv[])
{
	
	return 0;
}

int
max(int a[], int n)
{
	int i, max = a[0];
	
	for (i = 0; i < n; i += 1)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

int
average(int a[], int n)
{
	int i, sum = 0;
	
	for (i = 0; i < n; i += 1)
	{
		sum += a[i];
	}
	return sum / n;
}

int 
num_positive(int a[], int n)
{
	int i, count;
	
	for (i = 0; i < n; i += 1)
	{
		if (a[i] > 0)
		{
			count++;
		}
	}
	return count;
}

