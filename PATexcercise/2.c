#include <stdio.h>
#include <math.h>
#define N 1000

void print_result(int a);

int
main (int argc, char *argv[])
{
	int n, result[5] = {0}, count = 0, num = 0, a[N], i, j;
	
	scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
    	if (a[i] % 5 == 0 && a[i] % 2 == 0)
    	{
    		result[0] += a[i];
    	}
    	else if (a[i] % 5 == 1) 
    	{
    		result[1] += pow(-1, count) * a[i];
    		count++;
    	}
    	else if (a[i] % 5 == 2)
    	{
    		result[2]++;
    	}
    	else if (a[i] % 5 == 3)
    	{
    		result[3] += a[i];
    		num++;
    	}
    	else if (a[i] % 5 == 4 && result[4] < a[i])
    	{
    		result[4] = a[i];
    	}
    }
    
    for (j = 0; j < 3; j++)
    {
    	print_result(result[j]);
    }
    if (result[3] == 0)
    {
    	printf("N ");
    }
    else
    {
    	printf("%.1f ", (float)result[3] / num);
    }
    if (result[4] == 0)
    {
    	printf("N\n");
    }
    else
    {
    	printf("%d\n", result[4]);
    }
	return 0;
}

void
print_result(int a)
{
	if (a == 0)
    {
    	printf("N ");
    }
    else
    {
    	printf("%d ", a);
    }
}
