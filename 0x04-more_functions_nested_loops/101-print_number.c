#include "main.h"
/**
 * print_number - Print an integer using _putchar function.
 * @n: the number to print (int type).
 */
void print_number(int n)
{
	long power, longN;
	int check;

	longN = n;
	/* if negative */
	if (longN < 0)
	{
		_putchar('-');
		longN *= -1;
	}

	check = 1;
	power = 1;
	while (ckeck)
	{
		if ((longN / (power * 10)) > 0)
			power *= 10;
		else
			check = 0;
	}

	while (longN >= 0)
	{
		if (power == 1)
		{
			_putchar((longN % 10) + '0');
			longN = -1;
		}
		else
		{
			_putchar(((longN / power) % 10) + '0');
			power /= 10;
		}
	}
}
