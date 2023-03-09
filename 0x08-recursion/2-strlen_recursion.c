#include "main.h"
/**
 * _strlen_recursion - Find the length of a string
 * (using recursion).
 * @s: the string (char type string).
 * Return: the length (type int).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(++s));
}
