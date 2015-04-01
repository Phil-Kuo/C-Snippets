#include <stdio.h>

int
main (int argc, char *argv[])
{
/*    输入成绩，输出等级*/
    int score;
    char grade;
    
    printf("Enter numerical grade: ");
    scanf("%d", &score);
    
    switch (score/10 ) {
        case 10: case 9:
                 grade = 'A';
                 break;
        case 8:  grade = 'B';
                 break;
        case 7:  grade = 'C';
                 break;
        case 6:  grade = 'D';
                 break;
        default: grade = 'F';
                 break;     
    }
     printf("Letter grade: %c\n", grade);
    
    return 0;
}
