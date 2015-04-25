#include <stdio.h>

#define N 50

int
main (int argc, char *argv[])
{
	char sentence[N];
	int num_letter[5] = {0}, i, j;
	
	printf("Enter a sentence: ");
	gets(sentence);
	
	for (i = 0; i < N; i++)
	{
		switch (sentence[i])
		{
			case 'a': case 'A': num_letter[0]++; break;
			case 'e': case 'E': num_letter[1]++; break;
			case 'i': case 'I': num_letter[2]++; break;
			case 'o': case 'O': num_letter[3]++; break;
			case 'u': case 'U': num_letter[4]++; break;	
		}
	}
	
	printf("a e i o u\n");
	for (j = 0; j < 5; j++)
	{
		printf("%d ", num_letter[j]);
	}
	printf("\n");
	
	return 0;
}
