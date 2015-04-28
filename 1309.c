#include <stdio.h>
#include <ctype.h>

#define N 50

int computer_vowel_count(const char *sentence);

int
main (int argc, char *argv[])
{
	const char sentence[N];07111
	
	printf("Enter a sentence: ");
	gets(sentence);/*此处可以修改*/
	
	printf("Your sentence contains %d vowels.\n", computer_vowel_count(sentence));
	
	return 0;
}

int
computer_vowel_count(const char *sentence)
{
	int count = 0;
	
	while (*sentence)
	{
		if (tolower(*sentence) == 'a' || tolower(*sentence) == 'e' || tolower(*sentence) == 'i' || tolower(*sentence) == 'o' || tolower(*sentence) == 'u')
		{
			count++;
		}
		sentence++;
	}
	
	return count;
}
