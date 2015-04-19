#include <stdio.h>

int evaluate_position(char board[8][8]);

int
evaluate_position(char board[8][8])
{
	int white = black = 0;
	
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
				case 'q':	black += 9;
							break;
				case 'r':	black += 5;
							break;
				case 'b':
				case 'n': 	black += 3;
							break;
				case 'p': 	black += 1;
							break;
			}
		}
	}
	return white - black;
}
