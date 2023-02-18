#include <stdio.h>
/**
 * main - main block
 * Description: print all the numbers of base
 * 16 in lowercase using putchar function
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
