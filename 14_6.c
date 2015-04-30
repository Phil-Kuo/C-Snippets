#include <stdio.h>
#include <math.h>

#define DISP(f,x) printf(#f"(%g) = %g\n", (x), (f)(x))
#define DISP2(f,x,y) printf(#f"(%g) = %g " #f"(%g) = %g\n", (x), (f)(x), (y), (f)(y))

int
main (int argc, char *argv[])
{
	double x = 5.0, y = 10.0;
	
	DISP(sqrt, x);
	DISP2(sqrt, x, y);
	
	return 0;
}
