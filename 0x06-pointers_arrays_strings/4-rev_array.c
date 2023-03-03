#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: the array (array type int).
 * @n: number of elements of the array (type int).
 */
void reverse_array(int *a, int n)
{
	int i, temp, j;

	for (i = 0, j = n - 1; i < (n / 2); i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
