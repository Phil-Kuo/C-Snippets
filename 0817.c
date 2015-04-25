#include <stdio.h>

#define N 99

void create_magic_square_one(int magic_square[][N], int n);
void create_magic_square_two(int magic_square[][N], int n);
void print_magic_square(int magic_square[][N], int n);

int
main (int argc, char *argv[])
{
	int n, magic_square[N][N] = {0};
	
	printf("This programe creates a magic square of a specified size.\n"
		   "The size must be an odd number between 1 and 99.\n"
		   "Enter size of magic square: ");
	scanf("%d", &n);
	
	create_magic_square_one(magic_square, n); /*adopt first method*/
	print_magic_square(magic_square, n);
	
	return 0;
}

void
create_magic_square_one(int magic_square[][N], int n)
{
	int i, j, s;
	
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
}

void
print_magic_square(int magic_square[][N], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", magic_square[i][j]);
		}
		printf("\n");
	}
}
