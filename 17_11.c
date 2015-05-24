#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *next;
};

int
main (int argc, char *argv[])
{
	return 0;
}

int
count_occurrences(struct node *list, int n)
{
	int count = 0;
	for (; list != NULL; list = list->next)
	{
		if (list->value == n)
		{
			count++;
		}
	}
	return count;
}
