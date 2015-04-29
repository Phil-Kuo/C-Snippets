#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define N 50

int read_line(char *str, int n);
bool is_palindrome(const char *message);

int
main (int argc, char *argv[])
{
	char message[N+1];
	
	printf("Enter a message: ");
	read_line(message, N+1);
	
	if (is_palindrome(message))
	{	
		printf("Palindrome.\n");	
	}
	else
	{
		printf("Not a palidrome.\n");
	}	
	
	return 0;
}

int
read_line(char *message, int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
	{
		if ((ch > 90 && ch < 97) || ch < 65 || ch > 122)
		{
			continue;
		}
		message[i++] = toupper(ch);
	}
	message[i] = '\0';
	return i;
}

bool 
is_palindrome(const char *message)
{
	int i = strlen(message), j;
	bool flag = true;
	
	for (j = i - 1; j >= 0; j--)
	{
		if (message[j] != message[i - j - 1])
		{
			flag = false;
		}	
	
	}
	return flag;
}
