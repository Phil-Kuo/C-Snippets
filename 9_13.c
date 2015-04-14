#include <stdio.h>

int evaluate_position(char board[8][8]);

int
evaluate_position(char board[8][8])
{
	for (i = 0; i < 8; i += 1)
	{
		for (j = 0; j < 8; j += 1)
		{
			switch (board[i][j])
			{
				case 'Q':   white += 9;
							break;
				case 'R':   white += 5;
							break;
				case 'B': 
				case 'N':   white += 3;
							break;
				case 'P':   white += 1;
							break;
				case
				
			}
		}
	}
	return white - black;
}
