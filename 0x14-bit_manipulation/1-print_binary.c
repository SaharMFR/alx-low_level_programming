#include "main.h"

/**
 * print_binary - Print the binary representation of a number.
 * @n: the number to represent in binary (unsigned long int).
 */

void print_binary(unsigned long int n)
{
	int nShifts;
        unsigned long int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (num = n, nShifts = 0; (num >>= 1) > 0; nShifts++)
		;

	for (; nShifts >= 0; nShifts--)
	{
		if ((n >> nShifts) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

