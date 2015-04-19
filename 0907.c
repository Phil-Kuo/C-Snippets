#include <stdio.h>

int power(int x, int n);

int
main (int argc, char *argv[])
{
	int x = 3, n = 3;
	
	printf("%d\n", power(x, n));
	return 0;
}

int
power(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return (n % 2 == 0)?x * power(x, n / 2): x * power(x, n - 1);
	}
}
