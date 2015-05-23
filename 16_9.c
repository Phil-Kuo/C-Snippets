#include <stdio.h>

struct color
{
	int red;
	int green;
	int blue;
};

int
main (int argc, char *argv[])
{
	
	return 0;
}

struct color make_color(int red, int green, int blue)
{
	struct color c;
	
	c.red = red;
	c.green = green;
	c.blue = blue;
	
	return c;
}

struct color brighter(struct color c)
{
	
	if (c.red == 0 && c.green == 0 && c.blue == 0)
	{
		c.red = 3;
		c.green = 3;
		c.blue = 3;
	}
	
}

