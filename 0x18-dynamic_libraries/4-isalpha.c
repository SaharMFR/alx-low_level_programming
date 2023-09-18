#include "main.h"
/**
 * _isalpha - Check for alphabetic character
 * @c: the letter (char type)
 * Return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
