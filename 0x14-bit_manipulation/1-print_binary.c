#include "main.h"

/**
 * print_binary - Print the binary representation of a number.
 * @n: the number to represent in binary (unsigned long int).
 */

void print_binary(unsigned long int n)
{
	int len;
	unsigned long int largest, num;

	largest = 1;
	while (n >= largest)
	{
		largest *= 2;
	}
	largest = (unsigned long int)(largest * 0.5);
	num = largest;
	_putchar('1');
	while (largest >= 1)
	{
		if ((num + (unsigned long int)(largest * 0.5)) <= n)
		{
			_putchar('1');
			largest = (unsigned long int)(largest * 0.5);
			num += largest;
		}
		else
		{
			_putchar('0');
			largest = (unsigned long int)(largest * 0.5);
		}
	}
}
