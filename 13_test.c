#include <stdio.h>

int count_space(const char *s);

int
main (int argc, char *argv[])
{
	char s[10];
	
	gets(s);
	
	printf("%d", count_space(s));
	return 0;
}

int
count_space(const char *s)
{
	int count = 0;
	
	for (; *s != '\0'; s++)
	{
		if (*s == ' ')
		{
			count++;
		}
	}
	return count;
}
