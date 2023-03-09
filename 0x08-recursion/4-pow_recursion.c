#include "main.h"
/**
 * _pow_recursion - Calculate the value of 'x' raised to
 * the power of 'y' (using recursion).
 * @x: the base (type int).
 * @y: the power (type int).
 * Return: the calculated result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * (_pow_recursion(x, y - 1)));
}
