#include <stdio.h>

int
main (int argc, char *argv[])
{
	char **p = argv + argc - 1;
	while (p > argv)
	{
		printf("%s ", *p--);
	}
	printf("\n");
	
	/*or in this way*/
	
	int i;
	
	for (i = argc - 1; i > 0; i--)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	
	return 0;
}
