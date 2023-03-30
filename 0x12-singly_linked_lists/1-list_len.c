#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Calculate the number of elements in a linked
 * 'list_t' list.
 * @h: pointer to the first element in the list.
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t length;

	length = 0;
	current = h;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}

	return (length);
}
