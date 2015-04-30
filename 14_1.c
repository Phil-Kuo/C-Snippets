#include <stdio.h>

#define CUBIC(x) ((x)*(x)*(x))
#define n_MOD_4(n) ((n)%4)
#define MULTIPLE_SMALLER_THAN_100(x,y) ((x)*(y)<100?1:0)

int
main (int argc, char *argv[])
{
	int x = 3, n = 9, y = 100;
	printf("%d %d %d\n", CUBIC(x), n_MOD_4(n), MULTIPLE_SMALLER_THAN_100(x, y));
	return 0;
}
