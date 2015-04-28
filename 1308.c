#include <stdio.h>
#include <ctype.h>

int computer_scrabble_value(const char *word);

int
main (int argc, char *argv[])
{
	char word[10];
	
	printf("Enter a word: ");
	scanf("%s", word);
	
	printf("Scrabble value: %d\n", computer_scrabble_value(word));
	return 0;
}

int 
computer_scrabble_value(const char *word)
{
	int value = 0;
	
	while (*word)
	{
		switch (toupper(*word++))
		{
			case 'D': case 'G': 							  value += 2; break;
			case 'B': case 'C': case 'M': case 'P': 		  value += 3; break;
			case 'F': case 'H': case 'V': case 'W': case 'Y': value += 4; break;
			case 'K':  										  value += 5; break;
			case 'J': case 'X':								  value += 8; break;
			case 'Q': case 'Z':								  value += 10; break;
			default: 										  value += 1; break;
		}
	}
	
	return value;
}

