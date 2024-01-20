#include "search_algos.h"

int recursion_binary_search(int *array, int value, size_t low, size_t high);


/**
 * recursion_binary_search - Searches for a value in an array recursively.
 * @array: A pointer to the first element of the array to search in.
 * @value: The value to search for.
 * @start: The index to start searching from.
 * @end: The index to end searching at.
 * Return: The index where `value` is located,
 *      or -1 if `value` is not present in `array` or if `array` is NULL.
 */
int recursion_binary_search(int *array, int value, size_t start, size_t end)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (start + end) / 2;
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%i\n", array[i]);
		else
			printf("%i, ", array[i]);
	}

	if (array[start] == value)
		return (start);

	if (array[start] != array[end])
	{
		if (array[mid] < value)
			return (recursion_binary_search(array, value,
							mid + 1, end));
		if (array[mid] >= value)
			return (recursion_binary_search(array, value,
							start, mid));
	}

	return (-1);
}

/**
 * advanced_binary - Finds the first occurrence of a value in an array
 *	using binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`
 * @value: The value to search for.
 * Return: The index of the first occurrence of `value`.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;

	if (array)
		return (recursion_binary_search(array, value, start, end));
	return (-1);
}
