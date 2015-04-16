#include <stdio.h>

void swap(int *p, int *q);

int
main (int argc, char *argv[])
{
	int i, j;
	
	printf("Enter i and j: ");
	scanf("%d%d", &i, &j);
	
	swap(&i, &j);
	
	printf("i = %d,j = %d\n", i, j);
	
	return 0;
}

void 
swap(int *p, int *q)
{
	 int tmp = *p;
	 *p = *q;
	 *q = tmp;
}
