#include "main.h"
/**
 * _puts_recursion - Print a string followd by a new line
 * (using recursion).
 * @s: the string (char type string).
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
