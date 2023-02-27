#include "main.h"
/**
 * rev_string - Reverse a string.
 * @s: the string (type string).
 */
void rev_string(char *s)
{
	int length, i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;

	length = i;
	for (i--, j = 0; j < (length / 2); i--, j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
