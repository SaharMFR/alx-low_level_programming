#include "main.h"
/**
 * puts_half - Print the second half of a string followed by
 * a new line.
 * @str: the string (type string).
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
