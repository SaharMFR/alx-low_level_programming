#include "main.h"
/**
 * puts2 - Print characters with even index in a string.
 * @str: the string (type string).
 */
void puts2(char *str)
{
	int length, i;

	for (length = 0; s[length] != '\0'; length++)
		;

	for (i = 0; i < length; i =+ 2)
		_putchar(s[i]);

	_putchar('\n');
}
