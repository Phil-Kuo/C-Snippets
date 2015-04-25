#include <stdio.h>
#include <ctype.h>

#define N 50

int
main (int argc, char *argv[])
{
	int value = 0, i = 0;
	char ch, str[N];
	
	printf("Enter a phone number: ");
	while ((ch = getchar()) != '\n')
	{
		switch (toupper(ch))
		{
			case 'A': case 'B': case 'C': 			str[i++] = '2'; break;
			case 'D': case 'E': case 'F': 			str[i++] = '3'; break;
			case 'G': case 'H': case 'I': 			str[i++] = '4'; break;
			case 'J': case 'K':	case 'L': 			str[i++] = '5'; break;
			case 'M': case 'N':	case 'O': 			str[i++] = '6'; break;
			case 'P': case 'Q':	case 'R': case 'S': str[i++] = '7'; break;
			case 'T': case 'U':	case 'V': 			str[i++] = '8'; break;
			case 'W': case 'X':	case 'Y': case 'Z': str[i++] = '9'; break;
			default: 								str[i++] = ch;  break;
		}
	}
	str[i] = '\0';
	
	printf("%s\n", str);
	return 0;
}
