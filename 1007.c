#include <stdio.h>

#define MAX_DIGITS 10

/*external variable*/
const  int segements[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                               {0, 1, 1},
                               {1, 1, 0, 1, 1, 0, 1},
                               {1, 1, 1, 1, 0, 0, 1},
                               {0, 1, 1, 0, 0, 1, 1},
                               {1, 0, 1, 1, 0, 1, 1},
                               {1, 0, 1, 1, 1, 1, 1},
                               {1, 1, 1},
                               {1, 1, 1, 1, 1, 1, 1},
                               {1, 1, 1, 1, 0, 1, 1}
                              };
char digits[3][MAX_DIGITS*4];

/********************************
 * digits[3][8]					*
 *   01234567					*
 * 0  _   _						*
 * 1 |_| |_|					*
 * 2 |_| |_|					*
 *								*
 ********************************/

/*prototypes*/
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int
main (int argc, char *argv[])
{
	int digit, i;
	
	clear_digits_array();
	
	printf("Enter a number: ");
	scanf("%d", &digit);
	
	/*此处仍需要改善，目前只能做到读入10个数后再输出*/
	for (i = 0; i < MAX_DIGITS; i++)
	{
		scanf("%1d", &digit);
		process_digit(digit, 4 * i++);
	}
	
	print_digits_array();
	
	return 0;
}

void
clear_digits_array(void)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < MAX_DIGITS * 4; j++)
		{
			digits[i][j] = ' ';
		}
	}
}

/*********************************************************
 * process_digit: storing digit to digits[][] with stupid*
 * 				  method.							 	 *
 *********************************************************/
void
process_digit(int digit, int position)
{
	
	if (segements[digit][0] == 1)
	{
		digits[0][position+1] = '_';
	}
	if (segements[digit][3] == 1)
	{
		digits[2][position+1] = '_';
	}
	if (segements[digit][6] == 1)
	{
		digits[1][position+1] = '_';
	}
	if (segements[digit][1] == 1)
	{
		digits[1][position+2] = '|';
	}
	if (segements[digit][2] == 1)
	{
		digits[2][position+2] = '|';
	}
	if (segements[digit][4] == 1)
	{
		digits[2][position] = '|';
	}
	if (segements[digit][5] == 1)
	{
		digits[1][position] = '|';
	}
}

void
print_digits_array(void)
{
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4 * MAX_DIGITS; j++)
		{
			printf("%c", digits[i][j]);
		}
		printf("\n");
	}
	
}
