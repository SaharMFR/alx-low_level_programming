#include "main.h"

/**
 * flip_bits - Get the number of bits needed to be flipped
 *  to convert one number to another number.
 * @n: the first number.
 * @m: the second number.
 * Return: number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int i;

	difference = n ^ m;
	i = 0;

	while (difference)
	{
		i++;
		difference &= (difference - 1);
	}

	return (i);
}
