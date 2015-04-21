#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 60

int
main (int argc, char *argv[])
{
    char message[MAX_LEN], ch;
    int i = 0;
    
    printf("Enter message: ");
    while ((ch = getchar()) != '\n')
    {
    	ch = toupper(ch);
    	switch (ch)
    	{
    		case 'A': ch = '4'; break;
    		case 'B': ch = '8'; break;
    		case 'E': ch = '3'; break;
    		case 'I': ch = '1'; break;
    		case 'O': ch = '0'; break;
    		case 'S': ch = '5'; break;
    	}
    	message[i++] = ch;
    }
    message[i] = '\0';
    
    printf("In B1FF-speak: %s!!!!!!!\n", message);
    
    return 0;
}
