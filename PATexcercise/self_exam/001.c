#include <stdio.h>
#include <math.h>

int
main (int argc, char *argv[])
{
	int number_input, num_line, symbols_remained, i, j, k, count, tmp;
	char symbol; 
	
	scanf("%d %c", &number_input, &symbol);
	num_line = floor(sqrt((number_input + 1) / 2)); /*计算上半部分的行数（number_input = 2 * num_line^2 - 1）*/
	
	/*打印上半部分，如此多的临时变量*/
	for (k = num_line, count = 0; k > 0; k--, count++)
	{
		i = 2 * k - 1;	
		for (tmp = count; tmp > 0; tmp--)
		{
			printf(" ");
		}
		for (j = i; j > 0 ; j--)
		{
			printf("%c", symbol);		
		}
		printf("\n");
	}
	for (k = k + 2, count = count - 2; k <= num_line; k++, count--)
	{
		i = 2 * k - 1;
		for (tmp = count; tmp > 0; tmp--)
		{
			printf(" ");
		}
		for (j = i; j > 0 ; j--)
		{
			printf("%c", symbol);		
		}
		printf("\n");
	}
	symbols_remained = number_input - 2 * (num_line) * (num_line) + 1;
	
	printf("%d\n", symbols_remained);
		
	return 0;
}
