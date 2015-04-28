/*未完成好*/

#include <stdio.h>

#define MAX_LEN 60

int read_line(char str[], int n, char *terminate);
void reverse_array(char str[], int n);

int
main (int argc, char *argv[])
{
	char str[MAX_LEN], ch;
	int len;
	
	printf("Enter a sentence: ");
	len = read_line(str, MAX_LEN, &ch);
	reverse_array(str, len);
	printf("%c\n", ch);
	return 0;
}

int
read_line(char str[], int n, char *terminate)
{
	char ch;
	int i = 0;
	
	while ((ch = getchar()) != '?' && ch != '.' && ch != '!')
	{
		if (i > n)
		{
			printf("Too Long.\n");
		}
		str[i++] = ch;
	}
	*terminate = ch;
	return i;
}

void 
reverse_array(char str[], int n)
{
	int i;
	
	for (i = n - 1; i >= 0; i--)
	{	
		;
	}
}

