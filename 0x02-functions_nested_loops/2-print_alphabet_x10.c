#include "main.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabet
 * in lowercase.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
