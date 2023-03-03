#include "main.h"
/**
 * _strcmp - Compare two strings.
 * @s1: the first string (char type string).
 * @s2: the second string (char type string).
 * Return: the difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			retrun (s1[i] - s2[i]);
	}

	return (0);
}
