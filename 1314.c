#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_ALPHA 26

void read_word(char word[]);
bool are_anagrams(const char *word1, const char *word2);

int
main (int argc, char *argv[])
{
	char word1[NUM_ALPHA] = {0}, word2[NUM_ALPHA] = {0};
	
	printf("Enter first word: ");
	read_word(word1);
	printf("Enter second word:");
	read_word(word2);
	
	if (are_anagrams(word1, word2))
	{
		printf("The two words are anagrams.\n");
	}
	else
	{
		printf("The two words are not anagrams.\n");
	}
	
	
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

bool 
are_anagrams(const char *word1, const char *word2)
{
	int i;
	
	for (i = 0; i < NUM_ALPHA; i++)
	{
		if (word1[i] != word2[i])
		{
			return 0;
		}
	}
		
	return 1;
}
