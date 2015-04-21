#include <stdio.h>

int
main (int argc, char *argv[])
{
	int a[5][5], i, j, sum_row[5] = {0}, sum_col[5] = {0};
	
	for (i = 0; i < 5; i++)
	{
		printf("Enter row %d: ", i + 1);
	
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
			sum_row[i] += a[i][j];
		}	
	}
	
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 5; i++)
		{
			sum_col[j] += a[i][j];
		}
	}
	
	printf("Row totals:");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", sum_row[i]);
	}
	printf("\nColumn totals:");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", sum_col[i]);
	}
	printf("\n");
	
	return 0;
}
