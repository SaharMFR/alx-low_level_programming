#include <stdio.h>
/**
 * main - main block
 * Description: print all single digit numbers
 * of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}

	putchar('\n');

	return (0);
}
