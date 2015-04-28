#include <stdio.h>

#define N 60

int read_line(char *str, int n);
void encrypt_message(char *message, int n, int shift_amount);

int
main (int argc, char *argv[])
{
	char message[N];
	int len, shift_amount;
	
	printf("Enter message to be encrypted: ");
	len = read_line(message, N);
	printf("Enter shift amount: ");
	scanf("%d", &shift_amount);
	encrypt_message(message, len, shift_amount);
	
	return 0;
}

int
read_line(char *str, int n)
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
encrypt_message(char *message, int n, int shift_amount)
{
	int i;
	char encrypted_message[N];
	
	for (i = 0; i < n; i++)
	{
		if (message[i] >= 'a' && message[i] <= 'z')
		{
			encrypted_message[i] = ((message[i] - 'a') + shift_amount) % 26 + 'a';
		}
		else if (message[i] >= 'A' && message[i] <= 'Z')
		{
			encrypted_message[i] = ((message[i] - 'A') + shift_amount) % 26 + 'A';
		}
		else
		{
			encrypted_message[i] = message[i];
		}
	}
	
	printf("%s\n", encrypted_message);
}
