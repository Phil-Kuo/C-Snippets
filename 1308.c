#include <stdio.h>
#include <ctype.h>

int
main (int argc, char *argv[])
{
	int value = 0;
	char ch;
	
	printf("Enter a word: ");
	while ((ch = getchar()) != '\n')
	{
		switch (toupper(ch))
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
	
	printf("Scrabble value: %d\n", value);
	return 0;
}

int 
computer_scrabble_value(const char *word)
{
	
}