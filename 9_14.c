#include <stdio.h>

bool has_zero(int a[], int n);

bool
has_zero
{
	int i, count = 0;
	
	for (i = 0; i < n; i += 1)
	{
		if (a[i] == 0)
		{
			count++;
		}
		
	}
	if (count == n)
	{
		return true;
	}
	else if (count == 0)
	{
		return false;
	}
}
