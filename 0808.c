#include <stdio.h>

int
main (int argc, char *argv[])
{
	int a[5][5], i, j, sum_row[5] = {0}, sum_col[5] = {0};
	
	for (i = 0; i < 5; i++)
	{
		printf("Enter scores of student %d: ", i + 1);
	
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
			sum_row[i] += a[i][j];
		}	
	}
	
	int max[5] = {0}, min[5] = {0};
	for (j = 0; j < 5; j++)
	{
		min[j] = a[0][i];
		for (i = 0; i < 5; i++)
		{
			sum_col[j] += a[i][j];
			if (max[j] < a[i][j])
			{
				max[j] = a[i][j];
			}
			if (min[j] > a[i][j])
			{
				min[j] = a[i][j];
			}
		}
	}
	
	printf("各人总分:");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", sum_row[i]);
	}
	
	printf("\n各人平均分:");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", sum_row[i] / 5);
	}
	
	printf("\n各科平均分:");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", sum_col[i] / 5);
	}
	printf("\n各科最高分:");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", max[i]);
	}
	printf("\n各科低分:");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", min[i]);
	}
	printf("\n");
	return 0;
}
