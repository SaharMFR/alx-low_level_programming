#include "search_algos.h"

/**
 * _binary_search - Searches fo ra value in a sorted a rray of integers
 *	using the binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @value: The value to search for.
 * @start: The index to start searching from.
 * @end: The index to end searching at.
 * Return: The index where `value` is located,
 *	or -1 if `value` is not present in `array` or if `array` is NULL.
 */
int _binary_search(int *array, int value, size_t start, size_t end)
{
	size_t i, counter;

	while (array && start <= end)
	{
		i = (start + end) / 2;

		printf("Searching in array: ");
		for (counter = start; counter <= end; counter++)
		{
			if (counter == end)
				printf("%i\n", array[counter]);
			else
				printf("%i, ", array[counter]);
		}

		if (array[i] < value)
			start = i + 1;
		else if (array[i] > value)
			end = i - 1;
		else
			return (i);
	}

	return (-1);
}

/**
 * exponential_search - Searchs for a value in a sorted array of integers
 *	using the exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: the value to search for.
 * Return: The first index where `value` is located ,
 *	or -1 if `value` is not present in `array` or if `array` is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	if (value != array[0])
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
	}

	if (i < size)
	{
		printf("Value found between indexes [%li] and [%li]\n", i / 2, i);
		return (_binary_search(array, value, i / 2, i));
	}
	else
	{
		printf("Value found between indexes [%li] and [%li]\n", i / 2, size - 1);
		return (_binary_search(array, value, i / 2, size - 1));
	}
}
