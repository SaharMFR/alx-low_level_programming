#include "main.h"
/**
 * print_diagonal - Draws a diagonal line by printing
 * the character '\' n times , using _putchar function .
 * @n: nnomber of times (int type).
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
