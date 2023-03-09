#include "main.h"
/**
 * factorial - Calculate the factorial of a given number
 * (using recursion).
 * @n: the given number (type int).
 * Return: the calculated factorial (type int).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(--n));
}
