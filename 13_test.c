#include <stdio.h>
#include <string.h>

int
main (int argc, char *argv[])
{
	
	
	
	
	return 0;
}


int 
strcmp_my_1(char *s, char *t)
{
	int i;
	
	for (i = 0; s[i] == t[i]; i++)
	{
		if (s[i] == '\0')
		{
			return 0;
		}
	}
	return s[i] - t[i];
}

int 
strcmp_my_2(char *s, char *t)
{
	
	while (*s++ == *t++)
	{
		if (*s == '\0')
		{
			return 0;
		}
	}
	return *s - *t;
}

