#include <unistd.h>
#include <string.h>

int rand()
{
	static int x = -1;

	x++;
	if (x == 0)
		return 8;
	if (x == 1)
		return 8;
	if (x == 2)
		return 7;
	if (x == 3)
		return 9;
	if (x == 4)
		return 23;
	if (x == 5)
		return 74;
	return x * x % 30000;
}
