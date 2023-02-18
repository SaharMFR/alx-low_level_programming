#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two
 * two-digit numbers in range from 0 to 99 (different
 * two combinations) using putchar function 8 times
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((((i - (i % 10)) % 100) / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((((j - (j % 10)) % 100) / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');

	return (0);
}
