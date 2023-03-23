#include "function_pointers.h"
/**
 * int_index - Search for an integer.
 * @array: array of integers.
 * @size: the number of elements in the array.
 * @cmp: pointer to the function to be used to
 * 	compare values.
 * Return: the index of the first element for
 * 	which the 'cmp' funciotn doesn't return 0,
 * 	-1 if no element matches of size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
