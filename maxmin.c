#include <stdio.h>
#define N 10

void max_min(int a[], int n, int *max, int *min);

int
main (int argc, char *argv[])
{
	int b[N], i, big ,small;
	
	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i += 1)
	{
		scanf("%d", &b[i]);
	}
	
	max_min(b, N, &big, &small);
	
	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);
	
	return 0;
}

void
max_min(int a[], int n, int *max, int *min)
{
	int i;
	
	*max = *min = a[0];
	for (i = 0; i < n; i += 1)
	{
		if (a[i] > *max)
		{
			*max = a[i];
		}
		else if (a[i] < *min)
		{
			*min = a[i];
		}
	}
}
