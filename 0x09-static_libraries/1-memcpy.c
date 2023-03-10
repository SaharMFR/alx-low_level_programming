#include "main.h"
/**
 * _memcpy - Copy memory area.
 * Description: Copy 'n' bytes from memory area 'src' to memory
 * area 'dest'.
 * @dest: memory area we copy into (char type).
 * @src: memory area we copy from (char type).
 * @n: number of bytes to copy (type int).
 * Return: pointer to 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptrReturn;

	ptrReturn = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (ptrReturn);
}
