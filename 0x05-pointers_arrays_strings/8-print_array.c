#include <stdio.h>
#include "main.h"
/**
 * print_array - Print n elements of an array of integers
 * followed by a new line.
 * @a: the array (type int).
 * @n: number of elements wanted to be printed (type int).
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}

	printf("\n");
}
