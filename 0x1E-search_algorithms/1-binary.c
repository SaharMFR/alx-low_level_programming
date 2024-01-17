#include "search_algos.h"

/**
 * binary_search - Searches fo ra value in a sorted a rray of integers
 *	using the binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 * Return: The index where `value` is located,
 *	or -1 if `value` is not present in `array` or if `array` is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end, counter;

	start = 0;
	end = size - 1;

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
