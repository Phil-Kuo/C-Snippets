#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


/*prototypes*/
int roll_dice(void);
bool play_game(void);


/********************************************************
* main: 调用play_game()，得到游戏结果。获胜或落败次数+1，	*
* 		直至输入不是“y”或者“Y”得字符，停止调用play_game,	*
* 		输出获胜次数和落败次数，结束游戏。				*
* ******************************************************/

int
main (int argc, char *argv[])
{
	char command;
	int win_count = 0, lose_count = 0;
	
	srand((unsigned) time(NULL));/*初始化C语言随机数生成器*/
	do
	{
		if (play_game())
		{
			printf("You win!\n\n");
			win_count++;
		}
		else
		{
			printf("You lose!\n\n");
			lose_count++;
		}
		
		printf("Play again?");
		scanf(" %c", &command);
		printf("\n");
			
	}while (command == 'y' || command == 'Y');
	
	printf("Win: %d  Losses: %d\n", win_count, lose_count);

	return 0;
}

/**********************************************************
* roll_dice: 生成两个随机数，返回它们的和                 *
**********************************************************/

int 
roll_dice(void)
{
	int dice_1, dice_2;
	
	dice_1 = rand() % 6 + 1;
	dice_2 = rand() % 6 + 1;
	
	return dice_1 + dice_2;
}

/***************************************************************
* play_game: 调用roll_dice()函数进行掷骰子游戏，根据结果判断返回  *
*			 true或者是false。若第一次是7或11返回true，若第一次   *
*			 是2，3或12返回false，否则不断掷骰子至掷出7返回false，*
*			 或掷出于第一次相同的数字返回true。				    *
****************************************************************/

bool
play_game(void)
{
	int result;
	
	result = roll_dice();
	printf("You rolled %d\n", result);
	if (result == 7 || result == 11)
	{
		return true;
	}
	else if (result == 2 || result == 3 || result == 12)
	{
		return false;
	}
	else
	{
		printf("You point is: %d\n", result);
		for (; ;)
		{
			int goal; 
			
			goal = roll_dice();
			printf("You rolled %d\n", goal);
			
			if (goal == result)
			{
				return true;
			}
			else if (goal == 7)
			{
				return false;
			}
		}		
	}	
}
