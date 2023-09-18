#include "main.h"
/**
 * _abs - Compute the absolute value of an integer
 * @n: the integer (int type)
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}
