#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *	using the linear search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 * Return: The first index where `value` is located,
 *	or -1 if `value` is not present in `array` or if `array` is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
