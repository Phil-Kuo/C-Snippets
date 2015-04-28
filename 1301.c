#include <stdio.h>
#include <string.h>

#define N 20

void find_largest_and_smallest_word(char *word, char *largest, char *smalles);

int
main (int argc, char *argv[])
{
	char word[N+1], largest[N+1] = "", smallest[N+1] = " ";
	
	printf("Enter word: ");
	scanf("%s", word);
	strcpy(largest,strcpy(smallest, word));
	
	for (;;)
	{		
		printf("Enter word: ");
		scanf("%s", word);
		
		if (strlen(word) == 4)
		{
			break;
		}
		
		find_largest_and_smallest_word(word, largest, smallest);
	}
	
	printf("Smallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);
	return 0;
}

void 
find_largest_and_smallest_word(char *word, char *largest, char *smallest)
{
	if (strcmp(word, smallest) < 0)
	{
		strcpy(smallest, word);
	}
	else if (strcmp(word, largest) > 0)
	{
		strcpy(largest, word);
	}
}
