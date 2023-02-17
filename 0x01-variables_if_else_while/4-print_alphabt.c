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

	while (x <= 'z')
	{
		if ((x != 'q') && (x != 'e'))
		{
			putchar(x);
			x++;
		}
		else
			x++;
	}

	putchar('\n');

	return (0);
}
