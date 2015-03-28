#include <stdio.h>

#define PI 3.1415

int
main (void)
{
    float radius, volume;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    volume = 4.0f / 3.0f * PI * radius * radius * radius;
    
    printf("Volume of sphere is: %.2f\n", volume);
    
    return 0;
}

