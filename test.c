#include <stdio.h>

int
main (void)
{
/*
*第3章练习题1 P34                                                
*/

    printf("%6d, %4d\n", 86, 1040); /*    86, 1040*/
    printf("%12.5e\n", 30.253);/*    3.02530e+01*/
    printf("%.4f\n", 83.162);/*83.1620*/
    printf("%-6.2g\n", .0000009979);/*1e-06*/

/*
*练习题2
*/

    float x =30.56;
    printf("%-8.1e\n", x);
    printf("%10e\n", x);
    printf("%-8.3f\n",x);
    printf("%6.0f\n",x);
    
/*
*练习题3
*/

    printf("练习题3\n");
    int input1, input2, input3, input4, input5, input6;
    float float1, float2, float3, float4;
    
    scanf("%d", &input1);
    scanf(" %d", &input2);
    printf("%d %d\n", input1, input2);
    
    scanf("%d-%d-%d", &input1, &input2, &input3);
    scanf("%d -%d -%d", &input4, &input5, &input6);
    printf("%d %d %d %d %d %d\n", input1, input2, input3, input4, input5, input6);
    
    scanf("%f", &float1);
    scanf("%f ", &float2);/*好神奇*/
    printf("%f %f\n", float1, float2);
    
    scanf("%f,%f", &float1, &float2);
    scanf("%f, %f", &float3, &float4);
    printf("%f %f %f %f\n", float1, float2, float3, float4);
    
    return 0;
}

