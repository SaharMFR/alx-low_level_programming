#include "main.h"
/**
 * _puts - Print a string followed by a new line to stdout
 * using _putchar function.
 * @str: the string (type string).
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_puchar(str[0]);

	_putchar('\n');
}
