#include <stdio.h>

void digit_examine(int n, int *p);

int
main (int argc, char *argv[])
{
	int digit_exsist[10] = {0}, digit_exsist_of_double[10] = {0}, i, flag = 1;
	unsigned long n;
	
	scanf("%lu", &n);
	digit_examine(n, digit_exsist);
	digit_examine(2 * n, digit_exsist_of_double);
	for (i = 0; i < 10; i++)
	{
		if (digit_exsist[i] != digit_exsist_of_double[i])
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("Yes\n%lu\n", 2 * n);
	}
	else
	{
		printf("No\n%lu\n", 2 * n);
	}
	
	return 0;
}

void
digit_examine(int n, int *p)
{
	while (n)
	{
		p[n%10]++;
		n /= 10;
	}
}
