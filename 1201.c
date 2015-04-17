#include <stdio.h>

#define N 50
/************************************
 * 采用整数来跟踪数组中的当前位置  	*
 * *********************************/

int
main (int argc, char *argv[])
{
	char message[N], ch;
	int i = 0;
	
	printf("Enter a message: ");
	while ((ch = getchar()) != '\n' && i < N)
	{
		message[i++] = ch;
	}
	
	printf("%s\n", message);
	
	for (; i >= 0; i--)
	{
		printf("%c", message[i]);
	}
	printf("\n");
	
	return 0;
}
