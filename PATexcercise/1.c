#include <stdio.h>
#define T 10

int
main(void)
{
    long int a[T][3];
    int n, i;
   
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }
    
    for(i = 0; i < n; i++)
    {
       if(a[i][0] + a[i][1] > a[i][2])
       {
           printf("Case #%d: true\n", i+1);
       }
       else
       {
          printf("Case #%d: false\n", i+1);
       }    
    }
    return 0;
}
