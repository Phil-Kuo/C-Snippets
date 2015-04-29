/*1201修改版*/

#include <stdio.h>
#include <string.h>

#define N 50

int read_line(char *str, int n);
void reverse(char *message);

/************************************
 * 采用整数来跟踪数组中的当前位置  	*
 * *********************************/

int
main (int argc, char *argv[])
{
	char message[N], ch;
	int i = 0;
	
	printf("Enter a message: ");
	read_line(message, N);
	reverse(message);
	printf("%s\n", message);
	
	return 0;
}

int
read_line(char *str, int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
	{
		if (i < n)
		{
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
}

void 
reverse(char *message)
{
	char *p1 = message, *p2 = message + strlen(message)-1, tmp;
	
	for (; p1 < p2; p1++, p2--)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
	}
}
