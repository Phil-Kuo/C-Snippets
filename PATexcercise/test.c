#include <stdio.h>

int
main(void)
{	
	int z, x = 5, y = -10, a = 4, b = 2;
	z = x++ - --y * b/a;
	printf("%d\n",z);
	return 0;
}
