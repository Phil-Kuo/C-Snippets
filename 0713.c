#include <stdio.h>

#define N 60

int
main (int argc, char *argv[])
{
	int i = 0, num_word = 1;
	char ch;
	
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n')
	{
		if (ch == ' ')
		{
			num_word++;
		}
		else
		{
			i++;
		}
	}
	
	printf("Average word length: %.1f\n", (float) i / num_word);
	
	return 0;
}
