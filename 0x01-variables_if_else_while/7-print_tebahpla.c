#include <stdio.h>
/**
 * main - main block
 * Description: print the lowercase alphabet
 * in reverse using putchar function
 * Return: 0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}

	putchar('\n');

	return (0);
}
