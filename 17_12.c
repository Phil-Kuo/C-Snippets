#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *next;
};

struct node
*find_last(struct node *list, int n)
{
	struct node *ptr_to_last = NULL;
	
	for (;  list != NULL; list = list->next)
	{
		if (list->value == n)
		{
			ptr_to_last = list;
		}
	}
	
	return ptr_to_last;
}
