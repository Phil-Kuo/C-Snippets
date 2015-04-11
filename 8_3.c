#include <stdio.h>
#include <stdbool.h> /*C99 only*/

int
main (int argc, char *argv[])
{
    bool weekend[7] = {[0]=true, false, false, false, false, false, [6]=true};
    int i;
    
    for (i = 0; i < 7; i += 1)
    {
        printf("%d ", weekend[i]);
    }
    printf("\n");
    return 0;
}

