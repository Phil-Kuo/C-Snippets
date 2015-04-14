#include <stdio.h>

int gcd(int m, int n);

int 
gcd(int m, int n)
{
    if (n != 0)
    {
        int tmp;
        while (n != 0)
        {            
            tmp = m % n;
            m = n;
            n = tmp;
        }
        return m;
    }
    else
    {
        return m;
    }
    
}

int
main (int argc, char *argv[])
{
    int m, n;
    
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    
    printf("Greatest common divisor: %d\n", gcd(m, n));
    return 0;
}
