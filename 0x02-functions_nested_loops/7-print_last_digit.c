#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: the number (int type)
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(((-1) * (n % 10)) + '0');
		return ((-1) * (n % 10));
	}

	_putchar((n % 10) + '0');
	return (n % 10);
}
