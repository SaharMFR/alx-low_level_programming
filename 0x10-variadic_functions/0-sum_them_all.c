#include "variadic_functions.h"
/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: number of parameters.
 * Return: the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
