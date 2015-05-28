/* 时间复杂度：T(n) = O(n^2) */

#include <stdio.h>
#define N 10000

int max_sum_of_subsequence(int *a, int n, int *first, int *last);

int
main (int argc, char *argv[])
{
	
	int a[N], max_of_sum, n, i, first, last;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &a[i]);
	}
	max_of_sum = max_sum_of_subsequence(a, n, &first, &last);
	printf("%ld %d %d\n", max_of_sum, first, last);
	return 0;
}

int
max_sum_of_subsequence(int *a, int n, int *first, int *last)
{
	int i, j, sum = -1, tmp;
	
	*first = 0;
	*last = n - 1;
	for (i = 0; i < n; i++)
	{
		tmp = 0;
		for (j = i; j < n; j++)
		{
			tmp += a[j];
			if (tmp > sum)  
			{
				*first = i;
				*last = j;
				sum = tmp;
			}
		}	
	}
	return sum > 0?sum: 0;
}
