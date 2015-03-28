/*Calculates a broker's commission*/

#include <stdio.h>

int
main (void)
{
    float trade, commission;
    
    printf("Enter value of trade: ");
    scanf("%f", &trade);
    
    if (trade < 2500.00f)
    {
        commission = 30.00f + trade * 0.017f;
    }
    else if (trade <= 6250.00f)
    {
        commission = 56.00f + trade * 0.0066f;
    }
    else if (trade <= 20000.00f)
    {
        commission = 76.00f + trade * 0.0034f;
    }
    else if (trade < 50000.00f)
    {
        commission = 100.00f + trade * 0.0022f;
    }
    else if (trade < 500000.00f)
    {
        commission = 155.00f + trade * 0.0011f;
    }
    else
    {
        commission = 255.00f + trade * 0.0009f;
    }
    
    if (commission < 39.00f)
    {
        commission = 39.00f;
    }
    
    printf("Commission: $%.2f\n", commission);
    
    return 0;
}
