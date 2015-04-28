#include <stdio.h>

#define NUM_WORD 30
#define MAX_LEN 20

int read_line(char str[][MAX_LEN+1], int n, char *terminate);
void reverse_array(char str[][MAX_LEN+1], int n);

int
main (int argc, char *argv[])
{
	char str[NUM_WORD][MAX_LEN+1], ch;
	int num_word;
	
	printf("Enter a sentence: ");
	num_word = read_line(str, NUM_WORD, &ch);
	reverse_array(str, num_word);
	printf("%c\n", ch);
	return 0;
}

int
read_line(char str[][MAX_LEN+1], int n, char *terminate)
{
	char ch;
	int i = 0, j = 0;
	
	while ((ch = getchar()) != '?' && ch != '.' && ch != '!')
	{
		if (i > n)
		{
			printf("Too many words\n");
			break;
		}
		
		if (j > MAX_LEN)
		{
			printf("Too Long.\n");
			break;
		}
		else if (ch == ' ')
		{
			str[i++][j] = '\0';
			j = 0;
		}
		else
		{
			str[i][j++] = ch;
		}
		
	}
	str[i][j] = '\0';	
	*terminate = ch;
	return i;
}

void 
reverse_array(char str[][MAX_LEN+1], int n)
{
	int i;
	
	for (i = n; i >= 0; i--)
	{	
		printf("%s ", str[i]);
	}
	
}

