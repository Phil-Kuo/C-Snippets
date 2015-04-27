/*未完成*/
#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 50

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);

int top = 0;
char contents[STACK_SIZE];

int
main (int argc, char *argv[])
{
	char ch, result;
	
	for (;;)
	{
		make_empty();
		
		printf("Enter an RPN expression: ");
		
		for(;;)
		{
			scanf(" %c", &ch);
			if (48 < ch && ch < 57)
			{
				push(ch);
			}
			else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=')
			{
				switch (ch)
				{
					case '+': push(pop() + pop()); break;
					case '-': push(pop() - pop()); break;
					case '*': push(pop() * pop()); break;
					case '/': push(pop() / pop()); break;
					case '=': result = pop(); printf("Value of expression: %c\n", result); break;
				}
			}
			else
			{
				return 0;
			}
		}
		
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
		printf("Expression is too complex.\n");
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
		printf("Not enough operands in expression.\n");
		return 0;
	}
	else
	{
		return contents[--top];
	}
	
}
