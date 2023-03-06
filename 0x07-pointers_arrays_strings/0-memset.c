#include "main.h"
/**
 * _memset - Fill memory with a constant byte.
 * @s: the pointer to the memory area wanted to be filled
 * (char type).
 * @b: the byte we want to fill with (type char).
 * @n: the number of bytes that will be filled (type int).
 * Return: pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
