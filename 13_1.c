#include <stdio.h>

int
main (int argc, char *argv[])
{

	char *p, str[] = "Hello";
	int i, j;	
	scanf("%d%s%d", &i, str, &j);
	printf("%d %s %d\n", i, str, j);
	return 0;
}
