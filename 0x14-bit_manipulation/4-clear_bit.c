#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 * @n: pointer to decimal number to change.
 * @index: index position to change.
 * Return: 1 if it worked, -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int x;

	if (index > 64)
		return (-1);
	x = index;
	for (i = 1; x > 0; i *= 2, x--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
