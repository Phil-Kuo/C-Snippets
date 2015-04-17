#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 50

int
main (int argc, char *argv[])
{
	char message[N], ch;
	int i = 0, j;
	bool flag = true;
	
	printf("Enter a message: ");
	while ((ch = getchar()) != '\n' && i < N)
	{
		if ((ch > 90 && ch < 97) || ch < 65 || ch > 122)
		{
			continue;
		}
		message[i++] = toupper(ch);
	}
	
	for (j = i - 1; j >= 0; j--)
	{
		if (message[j] != message[i - j - 1])
		{
			flag = false;
		}	
	
	}
	if (flag)
	{	
		printf("Palindrome.\n");	
	}
	else
	{
		printf("Not a palidrome.\n");
	}	
	
	return 0;
}
