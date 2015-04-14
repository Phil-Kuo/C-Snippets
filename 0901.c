#include <stdio.h>

void selection_sort(int a[], int n);

int
main (int argc, char *argv[])
{
	int a[10], i;
	
	printf("Enter a[n](n = 10):");
	for (i = 0; i < 10; i += 1)
	{
		scanf("%d", &a[i]);
	}
	
	selection_sort(a, 10);
	
	printf("a in sorted order:");
	for (i = 0; i < 10; i += 1)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
	
	return 0;
}

void 
selection_sort(int a[], int n)
{
	int i;
	
	for (i = 0; i < n; i += 1)
	{
		if (a[i] > a[n-1])
		{
		int max = a[n-1];
		a[n-1] = a[i];
		a[i] = max;
		}
	}
	
	if (n > 1)
	{
		selection_sort(a, n-1);
	}
		
	
}
