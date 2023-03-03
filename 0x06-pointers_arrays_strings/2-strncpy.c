#include "main.h"
/**
 * _strncpy - Copy a string.
 * @dest: the string we add in (char type string).
 * @src: the string we add from (char type string).
 * @n: number of characters that we add (type int).
 * Retrun: pointer to the modified string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
