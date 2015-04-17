#include <stdio.h>

int *find_middle(int a[], int n);

int
main (int argc, char *argv[])
{
	int a[] = {1, 3, 4, 5, 2};
	
	printf("%d\n", *find_middle(a, 4));
	
	return 0;
}

int 
*find_middle(int a[], int n)
{
	
	return a + n/2;
}
