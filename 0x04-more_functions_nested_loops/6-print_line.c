#include "main.h"
/**
 * print_line - Draws a straight line by printing character '_'
 * n times followed by a new line , using _putchar function.
 * @n: the number of times (how long the straight line is) (int type).
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
