#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int x;

	x = 1;

	if (* (char *) & x == 1)
		return (1);
	else
		return (0);
}
