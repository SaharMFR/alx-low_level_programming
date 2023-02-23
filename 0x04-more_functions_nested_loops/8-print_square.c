#include "main.h"
/**
 * print_square - Prints (size * size) square by the character '#'
 * followed by a new line using _putchar function.
 * @size: the dimension of the square (int type).
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
