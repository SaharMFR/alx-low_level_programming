#include "main.h"
/**
 * cap_string - Capitalize all words of a string.
 * @str: the string (char type string).
 * Return: the capitalized string.
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] -= 32;

			for (j = 0; separators[j] != '\0'; j++)
			{
				if (str[i - 1] == separators[j])
					str[i] -= 32;
			}
		}
	}

	return (str);
}
