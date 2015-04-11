/*七段显示器得模拟显示*/

#include <stdio.h>

int
main (int argc, char *argv[])
{
    int i;
    const  int segements[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                                   {0, 1, 1},
                                   {1, 1, 0, 1, 1, 0, 1},
                                   {1, 1, 1, 1, 0, 0, 1},
                                   {0, 1, 1, 0, 0, 1, 1},
/*                                   and so on*/
                                   };
                                   
    return 0;
}
