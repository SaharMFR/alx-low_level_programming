#include "search_algos.h"

/**
 * min - Gets the minimum of 2 integers.
 * @x: The first integer.
 * @y: The second integer.
 * Return: The minimum of `x` and `y`.
 */
size_t min(size_t x, size_t y)
{
	if (y < x)
		return (y);
	return (x);
}

/**
 * jump_search - Searches for a value in a sorted array of integers
 *	using the jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 * Return: The first index where `value` is located,
 *	or -1 if `value` is not present in `array` or if `array` is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (end = 0; end < size && array[end] < value; end += jump)
	{
		printf("Value checked array[%li] = [%i]\n", end, array[end]);
		start = end;
	}

	printf("Value found between indexes [%li] and [%li]\n", start, end);

	for (; start <= min(end, size - 1); start++)
	{
		printf("Value checked array[%li] = [%i]\n", start,
				array[start]);
		if (array[start] == value)
			return (start);
	}

	return (-1);
}
