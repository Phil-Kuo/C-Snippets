#include <stdio.h>
#include <stdbool.h>/*C99 only*/

bool check(int x, int y, int n);

bool
check(int x, int y, int n)
{
    if (x >=0 && x <= n && y >=0 && y<=1 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int
main (int argc, char *argv[])
{
    
    return 0;
}
