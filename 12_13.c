#include <stdio.h>

#define N 2

int
main (int argc, char *argv[])
{
	int ident[N][N], *p, num_zeros = N; 
	
	for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++)
	{
		if (num_zeros == N)
		{
			*p = 1;
			num_zeros = 0;
		}
		else
		{
			*p = 0;
			num_zeros++;
		}
	}
	
	for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p += 1)
	{
		printf("%d ", *p);
	}
	return 0;
}
