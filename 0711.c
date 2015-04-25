#include <stdio.h>

#define MAX_LEN 30
int
main (int argc, char *argv[])
{
	char first_name[MAX_LEN], last_name[MAX_LEN];
	
	printf("Enter a first name and last name: ");
	scanf("%s%s", first_name, last_name);
	printf("%s, %c.\n", last_name, first_name[0]);
	
	return 0;
}
