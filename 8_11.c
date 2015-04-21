#include <stdio.h>

int
main (int argc, char *argv[])
{
    char checker_boarder[8][8];
    int i, j;
    
    for (i = 0; i < 8; i += 1)
    {
        for (j = 0; j < 8; j += 1)
        {
            if ((i + j) % 2 == 0)
            {
                checker_boarder[i][j] = 'B';
            }
            else
            {
                checker_boarder[i][j] = 'R';
            }
        }
    }
    return 0;
}
