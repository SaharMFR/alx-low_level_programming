#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 * Return: A pointer on the first node where `value` is located,
 *	or NULL if `value` is not present in `list` or if `list` is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = NULL, *end = NULL;

	if (!list)
		return (NULL);

	tmp = list;
	while (tmp && tmp->express && tmp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tmp->express->index, tmp->express->n);
		tmp = tmp->express;
	}

	end = tmp;
	while (end && end->next != end->express)
		end = end->next;

	if (tmp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tmp->express->index, tmp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       tmp->index, tmp->express->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       tmp->index, end->index);

	while (tmp != end && tmp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       tmp->index, tmp->n);

	if (tmp == end)
		return (NULL);
	return (tmp);
}
