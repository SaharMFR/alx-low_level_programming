#include "main.h"
/**
 * swap_int - Swap the values of two integers.
 * @a: the first integer (type pointer).
 * @b: the second integer (type pointer).
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
