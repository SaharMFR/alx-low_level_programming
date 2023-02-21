#include "main.h"
/**
 * _islower - Check for lowercase character.
 * @c: the letter (char type)
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
