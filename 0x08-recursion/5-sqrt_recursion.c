#include "main.h"
/**
 * assistantFunction - Assistant function to the function
 * _sqrt_recursion.
 * @n: the number (type int).
 * @sqrt: the square root (type int).
 * Return: the natural square root, '-1' if it does not
 * exist.
 */
int assistantFunction(int n, int sqrt)
{
	if ((sqrt * sqrt) == n)
		return (sqrt);
	else if (sqrt > (n / 2))
		return (-1);

	return (assistantFunction(n, sqrt + 1));
}

/**
 * _sqrt_recursion - Find the natural square root
 * of a number (using recursion).
 * @n: the number (type int).
 * Return: the natural square root if it exists,
 * '-1' if it does not exist (type int).
 */
int _sqrt_recursion(int n)
{
	int result;

	result = assistantFunction(n, 1);

	return (result);
}
