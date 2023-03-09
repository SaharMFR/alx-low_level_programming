#include "main,h"
/**
 * get_length - gets length of string
 * @s: string
 * Return: return length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}

/**
 * assistantFunction - Assistant function for the funciton
 * is_prime.
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int assistantFunction(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (assistantFunction(++s, l - 2));
	}
	else
		return (0);
}

/**
 * is_palindrome - Check if a string is a palindrome or not
 * (using recursion).
 * @s: the string (char type string).
 * Return: 1 if it is palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;

	return (my_pal(s, --length));
}
