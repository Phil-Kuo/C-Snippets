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
	char ch;
	int oprand1, oprand2;
	
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
			else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
			{
				oprand1 = pop() - 48;
				oprand2 = pop() - 48;
				switch (ch)
				{
					case '+': push(oprand1 + oprand2 + 48); break;
					case '-': push(oprand1 - oprand2 + 48); break;
					case '*': push(oprand1 * oprand2 + 48); break;
					case '/': push(oprand1 / oprand2 + 48); break;
					
				}
			}
			else if (ch == '=')
			{
				printf("Value of expression: %c\n", pop()); break; 
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
