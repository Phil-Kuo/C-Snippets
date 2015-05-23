#include <stdio.h>
#include <stdlib.h>
#define  FILE_NAME "example.dat"

int
main (int argc, char *argv[])
{
	FILE *fp;
	fp = fopen(FILE_NAME, 'r');
	if (fp == NULL)
	{
		printf("Can't open %s\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}
	
	fclose(fp);
	
	return 0;
}
