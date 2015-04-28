/*尚未全部完成*/

#include <stdio.h>
#include <string.h>

#define MSG_LEN 50
#define MAX_REMINDER 50

int read_line(char str[], int n);

int
main (int argc, char *argv[])
{
	char day_str[3], msg_str[MSG_LEN+1], reminder[MAX_REMINDER][MSG_LEN+3];
	int num_remind = 0, day, hour, miniute, i, j;

	for (;;)
	{	
		if (num_remind == MAX_REMINDER)
		{
			printf("No more space.\n");
			break;
		}
			
		printf("Enter day(dd hour:miniute) and reminder: ");
		scanf("%2d%2d:%2d", &day, &hour, &miniute);
		
		if (day == 0)
		{
			break;
		}
		
		sprintf(day_str,"%2d %2d:%2d", day, hour, miniute);	
		read_line(msg_str, MSG_LEN);
		
		/* 若输入日期为负数或大于31则显示出错信息 */
		if (day < 0 || day > 31)
		{
			printf("Enter a wrong day.\n");
			continue;
		}
		
		for (i = 0; i < num_remind; i++)
		{
			if (strcmp(day_str, reminder[i]) < 0)
			{
				break;
			}
		}
		for (j = num_remind; j > i; j--)
		{
			strcpy(reminder[j], reminder[j-1]);
		}
		
		strcpy(reminder[i], day_str);
		strcat(reminder[i], msg_str);
		
		num_remind++;
	}
	
	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
	{
		printf(" %s\n", reminder[i]);
	}
	return 0;
}

int
read_line(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
	{
		if (i < n)
		{
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
}
