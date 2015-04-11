#include <stdio.h>

#define DATES 30
#define HOURS 24

int
main (int argc, char *argv[])
{
    int temperature_readings[DATES][HOURS] = {0}, date, hour;
    float sum = 0.0f;
    
    for (date = 0; date < DATES; date += 1)
    {
        for (hour = 0; hour < HOURS; hour += 1)
        {
            sum += temperature_readings[date][hour]; 
        }
    }
    
    printf("%.2f\n", sum / (DATES * HOURS));
    
    return 0;
}
