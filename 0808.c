#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_QUIZZ 5

int
main (int argc, char *argv[])
{
	int a[NUM_STUDENTS][NUM_QUIZZ], student, quizz;
	
	for (student = 0; student < NUM_STUDENTS; student++)
	{
		printf("Enter scores of student %d: ", student + 1);
	
		for (quizz = 0; quizz < NUM_QUIZZ; quizz++)
		{
			scanf("%d", &a[student][quizz]);
		}	
	}
	
	printf("Student Totals Average\n");
	for (student = 0; student < NUM_STUDENTS; student++)
	{
		printf("%4d", student + 1);
		int sum = 0;
		for (quizz = 0; quizz < NUM_QUIZZ; quizz++)
		{
			sum += a[student][quizz];
		}
		printf("%8d%8d\n", sum, sum / NUM_QUIZZ);
	}
	
	printf("Quizz Average Highest Lowest\n");
	for (quizz = 0; quizz < NUM_QUIZZ; quizz++)
	{
		printf("%3d", quizz + 1);
		
		int highest = a[0][quizz];
		int lowest  = a[0][quizz];
		int sum = 0;
		
		for (student = 0; student < NUM_STUDENTS; student++)
		{
			if (a[student][quizz] > highest)
			{
				highest = a[student][quizz];
			}
			if (a[student][quizz] < lowest)
			{
				lowest = a[student][quizz];
			}
			sum += a[student][quizz];
		}
		printf("%8d%8d%8d\n", sum / NUM_STUDENTS, highest, lowest);
	}
	
	return 0;
}
