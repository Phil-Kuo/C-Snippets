#include <stdio.h>
#include <ctype.h>

int
main (int argc, char *argv[])
{
	
	return 0;
}

/********************************************
 *存储输入字符前跳过空白字符					*
 ********************************************/
int read_line_a(char s[], int n)
{
	int;
	
	while (!isspace(ch = getchar()) || ch != '\n')
	{
		if (i < n)
		{
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
	
}

/************************************************
 *遇到第一个空白字符时停止读入					*
 ************************************************/
int read_line_b(char s[], int n)
{
	int;
	
	while (!isspace(ch = getchar()))
	{
		if (i < n)
		{
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
	
}
 

