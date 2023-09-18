#include "main.h"
/**
 * _strspn - Get the length of a prefix substring.
 * @s: initial segment (char type string).
 * @accept: the prefix (char type string).
 * Return: the number of bytes in the initial segment of 's'
 * which consists only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
