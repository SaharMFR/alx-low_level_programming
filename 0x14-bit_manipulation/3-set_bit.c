#include "main.h"

/**
 * set_bit - Set value of a bit to 1 at a given index.
 * @n: decimal number passed by pointer.
 * @index: index of the position to change, starting from 0
 * of the bit we want to set.
 * Return: 1 if it worked, -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
