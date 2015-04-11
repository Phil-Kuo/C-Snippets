/*Prints a table of compound interst.*/

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value)) / sizeof(value[0]))
#define INITIAL_BALANCE 100

int
main (int argc, char *argv[])
{
    float low_rate;
    int num_years, i, year, month;
    double value[5];
        
    printf("Enter interst rate: ");
    scanf("%f", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);
    
    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++)
    {
        printf("%6.0f%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");
    
    for (year = 1; year <= num_years; year++)
    {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++)
        {
            for (month = 0; month <= 12; month++)
            {
                value[i] += value[i] *  (low_rate + i) / (12 * 100.0f);/*此处要注意类型转换*/
            }
            
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    
    return 0;
}
