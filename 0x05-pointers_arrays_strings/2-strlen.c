#include "main.h"
/**
 * _strlen - Return he length of a string.
 * @s: the string (type pointer).
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int nChars;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		nChars++;

	return (nChars);
}
