#include "main.h"
/**
 * string_toupper - Change all lowercase letters of astring
 * to uppercase.
 * @str: the string (char type string).
 * Return: the uppercase string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
