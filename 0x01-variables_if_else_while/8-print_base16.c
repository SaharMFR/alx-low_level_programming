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
	char c = 'a';

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
