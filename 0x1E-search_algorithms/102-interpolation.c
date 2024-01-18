#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *	using the interpolation search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 * Return: The first index where `value` is located,
 *	or -1 if `value` is not present in `array` or if `array` is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);

	while ((array[low] != array[high]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
	{
		printf("Value checked array[%li] = [%i]\n", low, array[low]);
		return (low);
	}

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	printf("Value checked array[%li] is out of range\n", pos);
	return (-1);
}
