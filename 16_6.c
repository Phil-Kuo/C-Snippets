/*输入seconds输出hours:minutes:seconds的格式*/

#include <stdio.h>

struct time
{
	int hours, minutes, seconds;
};
/*protype*/
struct time split_time(long total_seconds);

int
main (int argc, char *argv[])
{
	long seconds = 12000;
	struct time t = split_time(seconds);
	printf("%d %d %d\n", t.hours, t.minutes, t.seconds);
	return 0;
}
struct time split_time(long total_seconds)
{
	struct time t;
	
	t.seconds = (int)(total_seconds % 60);
	t.hours = (int)(total_seconds / 3600);
	t.minutes = (total_seconds - 3600 * t.hours - t.seconds) / 60;
	
	return t;
}
