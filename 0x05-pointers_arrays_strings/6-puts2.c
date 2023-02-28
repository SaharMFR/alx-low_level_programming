#include "main.h"
/**
 * puts2 - Print characters with even index in a string.
 * @str: the string (type string).
 */
void puts2(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
		;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
