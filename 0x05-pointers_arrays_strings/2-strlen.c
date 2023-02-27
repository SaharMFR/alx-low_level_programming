#include "main.h"
/**
 * _strlen - Return he length of a string.
 * @s: the string (type pointer).
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int nChars;

	for (nChars = 0; s[nChars] != '\0'; nChars++)
		;

	return (nChars);
}
