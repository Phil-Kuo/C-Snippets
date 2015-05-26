#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000
#define MAX_LEN 100

struct student
{
	char name[MAX_LEN+1];
	int age, score;
};

int cmp (const void *a, const void *b);

int
main (int argc, char *argv[])
{
	int n, i;
	  
	struct student Stu[N];
	
	while(scanf("%d", &n) != EOF)
		for (i = 0; i < n; i++)
		{
			scanf("%s %d %d", Stu[i].name, &Stu[i].age, &Stu[i].score);
		}
	
		qsort(Stu, n, sizeof(struct student), cmp);
	
		for (i = 0; i < n; i++)
		{
			printf("%s %d %d\n", Stu[i].name, Stu[i].age, Stu[i].score);
		}
	return 0;
}

int 
cmp(const void *a, const void *b)
{
	if (((struct student *)a)->score != ((struct student *)b)->score)
		return ((struct student *)a)->score - ((struct student *)b)->score;
	if (strcmp(((struct student *)a)->name, ((struct student *)b)->name) != 0)
		return strcmp(((struct student *)a)->name, ((struct student *)b)->name) > 0;
	return ((struct student *)a)->age - ((struct student *)b)->age;
}
