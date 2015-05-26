#include <stdio.h>
#define N 100

int
main (int argc, char *argv[])
{
	int n, m, array[N], i; 
	
	scanf("%d %d", &n, &m);
	m = m % n;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	for (i = n - m; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	for (i = 0; i < n - m - 1; i++)
	{
		printf("%d ", array[i]);
	}
	printf("%d\n", array[n-m-1]);/*序列结尾不能有多余空格*/
	return 0;
}
