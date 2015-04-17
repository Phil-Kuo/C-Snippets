#include <stdio.h>

int sum_array(const int a[], int n);

int
main (int argc, char *argv[])
{
	
	return 0;
}

/************************************************************
 * sum_array: 遍历数组a，求和。采用指针算术运算代替数组下标	*
 ************************************************************/
 
int 
sum_array(const int a[], int n)
{
	const int *p;
	int sum;
	
	sum =0;
	for (p = a; p < a + n; p += 1)
	{
		sum += *p;
	}
	
	return sum;
}
