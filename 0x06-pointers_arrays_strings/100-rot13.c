#include "main.h"
/**
 * rot13 - Encode a atring using rot13.
 * @str: the string (char type string).
 * Return: encoded string.
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 65 && str[i] <= 90 && (str[i] + 13) > 90) || (str[i] >= 97 && str[i] <= 122 && (str[i] + 13) > 122)
			str[i] -= 13;
		else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			str[i] += 13;
	}

	return (str);
}
