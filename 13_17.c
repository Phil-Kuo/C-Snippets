/*未完成*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *filename, const char *extension);

int
main (int argc, char *argv[])
{
	const char filename[] = "memo.txt", extension[] = "TXT";
	
	printf("%d\n", test_extension(filename, extension));
	
	return 0;
}

bool
test_extension(const char *filename, const char *extension)
{
	while (*filename++ != '.')
	{
		
	}
	while (toupper(*filename) == toupper(*extension))
	{
		filename++;
		extension++;
	}
}

