#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


#define ROW 10
#define COLUMN 10

int
main (int argc, char *argv[])
{
	char a[ROW][COLUMN];
	int row, column, direction, i, j, x, y;
	
	
	for (row = 0; row < ROW; row++)
	{
		for (column = 0; column < COLUMN; column++)
		{
			a[row][column] = '.';
		}
	}
	
	srand((unsigned) time(NULL));
	
	for (row = 0, column = 0, a[0][0] = 'A', i = 1; i < 26;)
	{
		/*生成随机数——>确定移动方向——>判断移动方向是否有效——>执行移动直至结束*/
		bool restricted_flag[4] = {0};
		for (;;)
		{
			direction = rand() % 4;
			switch (direction)
			{
				case 0: x = 1, y = 0;	break;
				case 1: x = 0, y = 1;	break;
				case 2: x = -1, y = 0;	break;
				case 3: x = 0, y = -1;	break;
			}
			if (row + x < 0 || row + x >= ROW || column + y < 0 || column + y >= COLUMN 
			|| a[row+x][column+y] != '.' )
			{
				if (restricted_flag[direction])
				{
					for (j = 0; j < 4; j++)
					{
						if (restricted_flag[j])
						{
							continue;
						}
						else
						{
							break;
						}
					}
					if (j == 4)
					{
						printf("Terminate advance.\n");
						return 0;				
					}
				
				}
				else
				{
					restricted_flag[direction] = true;
				}
			}
			else
			{
				break;
			}	
		}

		row = row + x;
		column = column + y;
		a[row][column] = 'A' + i;
		i++;	
	}
	
	for (row = 0; row < ROW; row++)
	{
		for (column = 0; column < COLUMN; column++)
		{
			printf("%c ", a[row][column]);
		}
		printf("\n");
	}
	
	return 0;
}
/*		for (j = 0; j < 4; j++)*/
/*		{*/
/*			if (restricted_flag[j])*/
/*			{*/
/*				continue;*/
/*			}*/
/*			else*/
/*			{*/
/*				break;*/
/*			}*/
/*		}*/
/*		if (j == 4)*/
/*		{*/
/*			printf("Terminate advance.\n");*/
/*			break;				*/
/*		}*/
/*		direction = rand() % 4; */
/*		if (direction == 0)*/
/*		{*/
/*			if (row + 1 >= ROW || a[row][column] != '.' )*/
/*			{*/
/*				restricted_flag[direction] = true;*/
/*				continue;				*/
/*			}*/
/*			else*/
/*			{*/
/*				a[++row][column] = 'A' + i;*/
/*				i++;*/
/*			}*/
/*		}*/
/*		else if (direction == 1)*/
/*		{*/
/*			if (column + 1 >= COLUMN || a[row][column] != '.')*/
/*			{*/
/*				restricted_flag[direction] = true;*/
/*				continue;*/
/*			}*/
/*			else*/
/*			{*/
/*				restricted_flag[direction] = true;*/
/*				a[row][++column] = 'A' + i;*/
/*				i++;*/
/*			}*/
/*		}*/
/*		else if (direction == 2)*/
/*		{*/
/*			if (row - 1 >= ROW || a[row][column] != '.' )*/
/*			{*/
/*				restricted_flag[direction] = true;*/
/*				continue;*/
/*			}*/
/*			else*/
/*			{*/
/*				a[--row][column] = 'A' + i;*/
/*				i++;*/
/*			}*/
/*		}*/
/*		else if (direction == 3)*/
/*		{*/
/*			if (column - 1 >= COLUMN || a[row][column] != '.')*/
/*			{*/
/*				restricted_flag[direction] = true;*/
/*				continue;*/
/*			}*/
/*			else*/
/*			{*/
/*				a[row][--column] = 'A' + i;*/
/*				i++;*/
/*			}*/
/*		}*/
/*		*/
/*	}*/
