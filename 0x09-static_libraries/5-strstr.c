#include "main.h"
#include <stdlib.h>
/**
 * _strstr - Locate a substring.
 * @haystack: the string we search in (char type string).
 * @needle: the substring we want to found the first occurance
 * of it.
 * Return: pointer to beginning of th elocated substring , NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
