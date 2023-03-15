#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenate two strings.
 * @s1: the first string (char type string).
 * @s2: the second string (char type string).
 * Return: pointer to a newly allocated space in memory
 * which contains the contents of 's1' , 's2' and null terminated,
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	arr = malloc(((sizeof(*s1) * i) + (sizeof(*s2) * j));
	if (arr == NULL)
		return (NULL);

	for (k = 0, l = 0; k < (i + j + 1); k++)
	{
		if (k < i)
			arr[k] = s1[k];
		else
		{
			arr[k] = s2[l];
			l++;
		}
	}

	return (arr);
}
