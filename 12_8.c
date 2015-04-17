#include <stdio.h>

void store_zeros(int a[], int n);

int
main (int argc, char *argv[])
{
	
	return 0;
}

/************************************************************
 *store_zeros: 采用指针算术运算代替数组下标将数组a初始化为0	*
 ************************************************************/
void
store_zeros(int a[], int n)
{
	int *p;
	for (p = a; p < a + n; p += 1)
	{
		*p = 0;
	}
}
