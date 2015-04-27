
#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 50

void push(char ch);
char pop(void);
bool is_empty(void);
bool is_full(void);

int top = 0;
char contents[STACK_SIZE];

int
main (int argc, char *argv[])
{
	char ch;
	
	printf("Enter parenteses and/or braces: ");
	
	while ((ch = getchar()) != '\n')
	{
		if (ch == '(' || ch == '{')
		{
			push(ch);
		}
		else if (ch == ')' && pop() != '(')
		{
			break;
		}
		else if (ch == '}' && pop() != '{')
		{
			break;
		}
	}
	if 	(is_empty())
	{
		printf("Parenteses/braces are nested properly.\n");
	}
	else
	{
		printf("Parenteses/braces are not nested properly.\n");
	}
	
	return 0;
}

void
make_empty(void)
{
	top = 0;
}

bool
is_empty(void)
{
	return top == 0;
}

bool 
is_full(void)
{
	return top == STACK_SIZE;
}

void 
push(char ch)
{
	if (is_full())
	{
		printf("Stack overflow.\n");
	}
	else
	{
		contents[top++] = ch;
	}
	
}

char
pop(void)
{
	if (is_empty())
	{
		;
	}
	else
	{
		return contents[--top];
	}
	
}
