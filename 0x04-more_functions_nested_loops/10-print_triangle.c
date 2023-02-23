#include "main.h"
/**
 * print_triangle - Print a triangle with "size" units
 * for the height and base length , by the character '#',
 * using only _putchar function.
 * @size: the height and base length (int type).
 */
void print_triangle(int size)
{
	int i, j, k, l;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < (size - i); j++)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
