#include <stdio.h>
#include <ctype.h>

int read_line_a(char str[], int n);
int read_line_b(char str[], int n);

int
main (int argc, char *argv[])
{
	char str[10];
	
	printf("Enter a string: ");
	
/*	read_line_a(str, 10);*/
/*	read_line_b(str, 10);*/
/*	read_line_c(str, 10);*/
	read_line_d(str, 10);
	printf("%s\n", str);
	return 0;
}

/********************************************
 *存储输入字符前跳过空白字符					*
 ********************************************/
int 
read_line_a(char str[], int n)
{
	int i = 0;
	char ch;
	
	while ((ch = getchar()) != '\n')
	{
		if (i == 0 && isspace(ch ))
		{
			;
		}
		else if (i < n)
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
int 
read_line_b(char str[], int n)
{
	int i = 0;
	char ch;
	
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
 
/************************************************
 * 遇到第一个换行符时停止输入并将其存入数组		*
 ************************************************/

int read_line_c(char str[], int n)
{
	int i = 0;
	char ch;
	
	do
	{
		ch = getchar();
		if (i < n)
		{
			str[i++] = ch;
		}
	}while (ch != '\n');
	
	str[i] = '\0';
	return i;
}

/************************************************
 * 把没有空间存储的字符留下以备后用。				*
 ************************************************/
 
int read_line_d(char str[], int n)
{
	int ch, i = 0, j = 0;
	
	for (i = 0; i < n; i++)
	{
		ch = getchar();
		if (ch == '\n')
		{
			break;
		}
		str[i] = ch;
	}
	str[i] = '\0';
	return i;
}

