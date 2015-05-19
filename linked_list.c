/*在链表开始处插入节点*/
#include <stdlib.h>

struct node
{
	int value;
	struct node * next;
};

first = NULL;
new_node = malloc(sizeof(struct node));
new_node->value = 10;
new_node->next = first;
first = new_node;

/*写成函数模式*/
struct node *add_to_litst(struct node *list, int n)
{
	struct node *new_node;
	
	new_node = malloc(sizeof(struct node));
	new_node->value = n;
	new_node->next = list;
	
	return new_node;
}

/*使用add_to_list来创建一个含有用户录入数得链表*/
struct node *read_numbers(void)
{
	struct node *first = null;
	int n;
	
	printf("Enter a series of integer (0 to terminate): ");
	for (;;)
	{
		scanf("%d", &n);
		if (n == 0)
		{
			return  first;
		}
		first = add_to_litst(first, n);
	}
}

/*搜索链表找到数值n返回结点指针*/
struct node *search_list(struct node *list, int n)
{
	struct node *p;
	
	for (p = list; !p; p = p->next)
	{
		if (p->value == n)
		{
			return p;
		}
	}
	return NULL;
}

struct node *search_list(struct node *list, int n)
{
	while (list != NULL && list->value != n)
	{
		list = list->next;
	}
	return list;
}

/*删除结点*/
struct node *delete_from_list(struct node *list, int n)
{
	struct node *cur, *prev;
	
	for (cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
	{
		;
	}
	if (cur == NULL)
	{
		return list;
	}
	if (prev == NULL)
	{
		list = list->next;
	}
	else
	{
		prev-next = cur->next;
	}
	return list;
}

