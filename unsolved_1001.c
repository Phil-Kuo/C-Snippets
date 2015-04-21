#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 100

/*external variable*/
char contents[STACK_SIZE];
int top = 0;

/*prototypes*/
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);

int
main (int argc, char *argv[])
{
	char ch;
	bool flag = false;
	
	printf("Enter parenteses and/or braces: ");
	while ((ch = getchar()) != '\n')
	{
		if (ch == '{' || ch == '(')
		{
			push(ch);
		}
		else if (ch == '}' && pop() == '{' || ch == ')' && pop() == '(')
		{
			flag = true;
		}
		
	}
	if (is_empty() && flag)
		{
			printf("Parenteses/braces are nested properly.");
		}
	else
	{
		printf("not properly.");
	}
	printf("\n");
	
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
/*		stack_overflow();*/
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
/*		stack_underflow();*/
	}
	else
	{
		return contents[--top];
	}
}
