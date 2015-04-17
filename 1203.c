#include <stdio.h>

#define N 50

int
main (int argc, char *argv[])
{
	char message[N], ch;
	char *p = message;
	
	printf("Enter a message: ");
	while ((ch = getchar()) != '\n' && p < message + N)
	{
		*p++ = ch;
	}
	
	while (p >= message )
	{
		printf("%c", *--p);
	}
	printf("\n");
	
	return 0;
}
