#include "main.h"
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
	int i, j;

	newString = malloc(sizeof(s1) + n + 1);

	for (i = 0; s1[i] != '\0'; i++)
		newString[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		newString[i] = s2[j];
		i++;
	}

	newString[i] = '\0';

	return (newString);
}
