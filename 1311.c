#include <stdio.h>

#define N 60

double compute_average_word_length(const char *sentence);

int
main (int argc, char *argv[])
{
	char sentence[N];
	
	printf("Enter a sentence: ");
	gets(sentence);
	
	printf("Average word length: %.1f\n", compute_average_word_length(sentence));
	
	return 0;
}

double
compute_average_word_length(const char *sentence)
{
	int num_word = 1, i = 0;
	
	while (*sentence)
	{
		if (*sentence++ == ' ')
		{
			num_word++;
		}
		else
		{
			i++;
		}
	}
	return (double) i / num_word;
}
