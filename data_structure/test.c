#include <stdio.h>

void printN_with_loop(int n);
void printN_with_recurse(int n);

int
main (int argc, char *argv[])
{
	int n;
	
	printf("Enter a number:");
	scanf("%d", &n);
	
/*	printN_with_loop(n);*/
	printN_with_recurse(n);
	
	return 0;
}

void
printN_with_loop(int n)
{
	int i;
	
	for (i = 0; i <= n; i++)
	{
		printf("%d\n", i);
	}
}

void
printN_with_recurse(int n)
{
	if (n)
	{
		printN_with_recurse(n-1);
		printf("%d\n", n);
	}

}
