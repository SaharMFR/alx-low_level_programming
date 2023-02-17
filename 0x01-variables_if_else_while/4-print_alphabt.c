#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase except
 * 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while ((x <= 'z') && (x != 'q') && (x != 'e'))
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
