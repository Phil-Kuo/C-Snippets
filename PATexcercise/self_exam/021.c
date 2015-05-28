#include <stdio.h>
#include <stdlib.h>

#define N 2001

int
main (int argc, char *argv[])
{
	struct polynominal
	{
		int coefficient, exponent;
	};
	
	int i = 0, length, j;
	struct polynominal *a;
	
	a = malloc(N * sizeof(struct polynominal));
	if (a == NULL)
	{
		printf("Error!\n");
		exit(EXIT_FAILURE);
	}
	
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &a[i].coefficient, &a[i].exponent);
		if (getchar() == '\n')
		{
			break;
		}
	}
	length = i + 1;
	
	for (j = 0; j < length; j++)
	{
		a[j].coefficient = a[j].coefficient * a[j].exponent;
		(a[j].exponent == 0)?a[j].exponent = 0:a[j].exponent--;
	}
	
	printf("%d %d", a[0].coefficient, a[0].exponent);
	for (j = 1; j < length; j++)
	{
		if (a[j].coefficient != 0)
		{
			/*如果系数和指数不全为零，则输出a[j]*/
			printf(" %d %d", a[j].coefficient, a[j].exponent);		
		}
		
	}
	printf("\n");
	
	free(a);
	return 0;
}
