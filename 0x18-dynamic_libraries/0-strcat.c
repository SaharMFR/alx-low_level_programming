#include "main.h"
/**
 * _strcat - Concatenate two strings.
 * @dest: the string we put in the result of concatenating.
 * @src: the other string we want to add.
 * Return: pointer to th eresulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
