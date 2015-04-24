#include <stdio.h>

#define NUM_ALPHA 26

void read_word(char word[]);

int
main (int argc, char *argv[])
{
	char first_word[NUM_ALPHA] = {0}, second_word[NUM_ALPHA] = {0};
	int i;
	
	printf("Enter first word: ");
	read_word(first_word);
	printf("Enter second word:");
	read_word(second_word);
	
	for (i = 0; i < NUM_ALPHA; i++)
	{
		if (first_word[i] != second_word[i])
		{
			printf("The two words are not anagrams.\n");
			return 0;
		}
	}
	
	printf("The two words are anagrams.\n");
	return 0;
}

void
read_word(char word[])
{
	char ch;
	
	while ((ch = tolower(getchar())) != '\n')
	{
		word[ch-'a'] += 1;
	}
}
