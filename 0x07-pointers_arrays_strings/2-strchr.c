#include "main.h"
/**
 * _strchr - Locate a character in a string.
 * @s: the string we search in (char type string).
 * @c: the character we search for (type char).
 * Return: pointer to first occurane of the character in
 * the string , NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
