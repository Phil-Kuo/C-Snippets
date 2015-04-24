#include <stdio.h>

#define N 99

int
main (int argc, char *argv[])
{
	int n, magic_square[N][N] = {0}, i, j, s;
	
	printf("This programe creates a magic square of a specified size.\n"
		   "The size must be an odd number between 1 and 99.\n"
		   "Enter size of magic square: ");
	scanf("%d", &n);
	
	for (i = 0, j = n/2, s = 1; s <= n * n; s++)
	{
		if (i == -1)
		{
			i = n - 1;
		}
		
		if (j == n)
		{
			j = 0;
		}
		
		if (magic_square[i][j])
		{
			if (j == 0)
			{
				j = n - 1;
			}
			else
			{
				j--;
			}
			if (i == n -1)
			{
				i = 1;
			}
			else
			{
				i = i + 2;
			}
			
		}
		magic_square[i--][j++] = s;
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", magic_square[i][j]);
		}
		printf("\n");
	}
	return 0;
}
