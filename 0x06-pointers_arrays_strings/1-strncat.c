#include "main.h"
/**
 * _strcat - Concatenate two strings.
 * @dest: the string we put the concatenated string.
 * @src: the string we add to the first one.
 * @n: the long from the second one (type int).
 * Return: pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char*src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
