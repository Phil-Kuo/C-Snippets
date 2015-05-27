/* 时间复杂度：T(n) = O(n^2) */

#include <stdio.h>
#define N 100000

int max_sum_of_subsequence(int *a, int n);

int
main (int argc, char *argv[])
{
	int a[N], n, max_of_sum, i;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	max_of_sum = max_sum_of_subsequence(a, n);
	printf("%d\n", max_of_sum);
	return 0;
}

int
max_sum_of_subsequence(int *a, int n)
{
	int i, j, sum = 0, tmp;
	for (i = 0; i < n; i++)
	{
		tmp = 0;
		for (j = i; j < n; j++)
		{
			tmp += a[j];
			if (tmp > sum)  
			{
				sum = tmp;
			}
		}	
	}
	return sum;
}
