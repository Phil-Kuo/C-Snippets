#include <stdio.h>

int digit(int n, int k);

int
digit(int n, int k)
{
    int i;
    int digits[k];
            
    for (i = 0; n != 0; i += 1)
    {
        digits[i]  = n % 10;/*求余直接可以得到一个数的第k位为什么？*/
        n /= 10;
    }
    if (k > i)
    {
        return 0;
    }    
    return digits[k-1];
    
}

int
main (int argc, char *argv[])
{
    int n, k;
    
    printf("Enter a number and the kth digit(from right side): ");
    scanf("%d%d", &n, &k);
    
    printf("From right side, it is %d.\n", digit(n, k));
    
    return 0;
}
