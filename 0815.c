#include <stdio.h>

#define N 60

int read_line(char str[], int n);
void encrypt_message(char str[], int n, int shift_amount, char encrypted_str[]);

int
main (int argc, char *argv[])
{
	char str[N], encrypted_str[N];
	int len, shift_amount;
	
	printf("Enter message to be encrypted: ");
	len = read_line(str, N);
	printf("Enter shift amount: ");
	scanf("%d", &shift_amount);
	encrypt_message(str, len, shift_amount, encrypted_str);
	
	printf("%s\n", encrypted_str);
	return 0;
}

int
read_line(char str[], int n)
{
	int i = 0;
	char ch;
	
	while ((ch = getchar()) != '\n')
	{
		if (i > n)
		{
			printf("Too long.\n");
			break;
		}
		str[i++] = ch;
	}
	str[i] = '\0';
	return i;
}

void
encrypt_message(char str[], int n, int shift_amount, char encrypted_str[])
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			encrypted_str[i] = ((str[i] - 'a') + shift_amount) % 26 + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			encrypted_str[i] = ((str[i] - 'A') + shift_amount) % 26 + 'A';
		}
		else
		{
			encrypted_str[i] = str[i];
		}
	}
}
