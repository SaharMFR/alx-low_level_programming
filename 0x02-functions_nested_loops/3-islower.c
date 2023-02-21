#include "main.h"
/**
 * _islower - Check for lowercase character.
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (97 <= c && c <= 122)
		return (1);
	return (0);
}
