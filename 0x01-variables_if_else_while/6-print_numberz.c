#include <stdio.h>
/**
 * main - main block
 * Description: print all single digit numbers
 * of base 10 starting from 0 using putchar twice
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

	putchar('\n');

	return (0);
}
