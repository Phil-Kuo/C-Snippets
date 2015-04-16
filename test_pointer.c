#include <stdio.h>

int
main (int argc, char *argv[])
{
	int *p;
	*p = 1;/*未对p进行初始化！！*/
	return 0;
}
