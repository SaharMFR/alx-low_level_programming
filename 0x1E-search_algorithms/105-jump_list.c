#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *	using the jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in `list`.
 * @value: The value to search for.
 * Return: A pointer to the first node where `value` is located,
 *	or NULL if `list` is not present in `list` or if `array` is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, j = 0, m;
	listint_t *prev;

	if (!list || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);

	do {
		prev = list;
		j++;
		i = j * m;

		while (list->next && list->index < i)
			list = list->next;

		if (!list->next && i != list->index)
			i = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)i, list->n);

	} while (i < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
