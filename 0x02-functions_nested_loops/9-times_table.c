#include "main.h"
/**
 * times_table - Print the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (j == 0)
				_putchar('0');
			else if (x > 9)
			{
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			if (j == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
