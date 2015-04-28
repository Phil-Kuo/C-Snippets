/*未完成*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 30

void reverse_name(char *name);

int
main (int argc, char *argv[])
{
	char name[2*MAX_LEN+1];
	
	printf("Enter a first name and last name: ");
	gets(name);
	
	reverse_name(name);
	return 0;
}

void
reverse_name(char *name)
{
	char first_name[MAX_LEN], last_name[MAX_LEN];
	
	while (*name)
	{
		strcat(first_name, name++);
	}
	
	while (*name)
	{
		strcat(last_name, name++);
	}
	
	printf("%s, %c.\n", last_name, first_name[0]);
}
