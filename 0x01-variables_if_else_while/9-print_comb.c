#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of
 * single-digit numbers using putchar function
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}

	putchar('\n');

	return (0);
}
