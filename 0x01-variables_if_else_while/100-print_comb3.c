#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations
 * of two digits (the two digits must be different) using
 * putcahr function five times
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putcahr(' ');
		}
	}

	putchar('\n');

	return (0);
}
