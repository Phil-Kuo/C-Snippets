#include <stdio.h>

int
main (int argc, char *argv[])
{
	
	return 0;
}


/****************************************************************
 * search: searches a[n] for the element that equals key. If 	*
 * 		   it doesn't exist return false, else return true.		*
 * **************************************************************/

bool 
search(const int a[], int n, int key)
{
	int *p;
	bool flag = false;
	
	for (p = a; p < a + n; p += 1)
	{
		if (*p == key;)
		{
			flag = true;
		}
	}
	
	return flag;
}
