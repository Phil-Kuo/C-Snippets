#include <stdio.h>


int
main (int argc, char *argv[])
{
	struct 
	{
		int num;
		int a;
	}x = {0, 1};
	
	printf("%d %d\n", x.a, (&x)->a);
	return 0;
}
