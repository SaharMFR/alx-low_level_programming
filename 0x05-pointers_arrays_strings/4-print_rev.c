#include "main.h"
/**
 * print_rev - Print a string in reverse followed by a new line.
 * @s: the string (type string).
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s);
	for (; i >=0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
