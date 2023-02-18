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
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (l = j + 1; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if ((i != 9) || (j != 8))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}


	putchar('\n');

	return (0);
}
