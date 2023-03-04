#include "main.h"
/**
 * leet - Encode a string into 1337.
 * @str: the string (char type string).
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char lettersReplaced[] = "aAeEoOtTlL";
	char lettersEncoded[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lettersReplaced[i] != '\0'; j++)
		{
			if (str[i] == letterReplaced[j])
			{
				str[i] = lettersEncoded[j];
				break;
			}
		}
	}

	return (str);
}
