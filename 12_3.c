#include <stdio.h>

#define N 10

int
main (int argc, char *argv[])
{
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = &a[0], *q = &a[N-1], temp, i;
	
	while (p < q)
	{
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
	
	for (i = 0; i < N; i += 1)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
