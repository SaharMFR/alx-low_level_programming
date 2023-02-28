#include "main.h"
/**
 * _strcpy - Copy the string from the second parameter to
 * the first one , including the terminating numm byte.
 * @dest: where the string will be copied in (type string).
 * @src: where ths string will be copeid from (type string).
 * Return: pointer to "dest".
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
		
