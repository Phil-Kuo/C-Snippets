#include <stdio.h>
#include <string.h>


#define LEN 10
void capitalize(char str[], int n);

int
main (int argc, char *argv[])
{
	char str[LEN+1];
	int len;
	
	printf("Enter a string: ");
	gets(str);
	len = strlen(str);
	capitalize(str, len);
	
	printf("%s\n", str);
	
	return 0;
}

void 
capitalize(char str[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		str[i] = toupper(str[i]);
	}
	
}
