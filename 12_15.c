#include <stdio.h>
#include <stdbool.h>

#define DAYS 7
#define HOURS 24

bool search(const int a[], int LEN, int key);

int
main (int argc, char *argv[])
{
	int temperature[DAYS][HOURS] = {{0}};
	
	if (search(temperature[0], DAYS * HOURS, 32))
	{
		printf("exist\n");
	}	
	
	return 0;
}

bool 
search(const int a[], int LEN, int key)
{
	int *p;
	bool flag = false;
	
	for (p = a; p < a + LEN; p += 1)
	{
		if (*p == key)
		{
			flag = true;
		}
	}
	
	return flag;
}
