#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int i, j, k, l, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n < j)
		j = n;

	length = i + n;
	newString = malloc(length + 1);

	if (newString == NULL)
		return (NULL);

	for (k = 0; k < length; k++)
	{
		if (k < i)
			newString[k] = s1[k];
		else
			newString[k] = s2[k - i];

	}

	newString[k] = '\0';

	return (newString);
}
