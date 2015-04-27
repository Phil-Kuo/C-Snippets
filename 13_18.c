/*如何忽略掉前两个//符号*/

#include <stdio.h>

void remove_filename(char *url);

int
main (int argc, char *argv[])
{
	char url[] = "www.knking.com/index.html";
	remove_filename(url);
	printf("%s\n", url);
	return 0;
}
void
remove_filename(char *url)
{
	while (*url++ != '/')
	{
		;
	}
	*--url = '\0';
}

