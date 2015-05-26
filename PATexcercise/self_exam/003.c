#include <stdio.h>
#define N 100

int
main (int argc, char *argv[])
{
	int n, m, array[n+m], i; /*构造长度为n+m的变长数组*/
	
	scanf("%d %d", &n, &m);
	m = m % n;
	for (i = m; i < n + m; i++)
	{
		scanf("%d", &array[i]);
	}
	for (i = n; i < n + m; i++)
	{
		array[i % n] = array[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d ", array[i]);
	}
	printf("%d\n", array[n-1]);/*序列结尾不能有多余空格*/
	return 0;
}



