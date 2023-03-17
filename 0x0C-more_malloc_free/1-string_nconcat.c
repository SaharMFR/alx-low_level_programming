#include "main.h"
#include <stdio.h>
/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - Concatenate 2 strings.
 * @s1: the first string (char type string).
 * @s2: the second string (char type string).
 * @n: the number of bytes should be added from the second string
 * (type int).
 * Return: pointer to a newly allocated space in memory, NULL if
 * the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	int strlen1, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s1);
	newString = malloc((strlen1 + n + 1) * sizeof(char));
	if (newString == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (strlen1 + n); i++)
	{
		if (i < strlen1)
			newString[i] = s1[i];
		else
			newString[i] = s2[c++];
	}
	newString[i] = '\0';

	return (p);
}

