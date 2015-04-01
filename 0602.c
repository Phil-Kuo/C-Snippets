#include <stdio.h>

int
main (int argc, char *argv[])
{
/*    输入两个整数，计算其最大公约数（Euclid算法）*/
    
    int m, n, tmp;
    
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    
    while ( n != 0)
    {
        tmp = m % n;
        m = n;
        n = tmp;
    }
    
    printf("Greatest common divisor: %d\n", m);
    
    return 0;
}
