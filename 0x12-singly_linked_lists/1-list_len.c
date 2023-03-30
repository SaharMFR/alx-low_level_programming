#include "lists.h"
/**
 * list_len - Calculate the number of elements in a linked
 * 'list_t' list.
 * @h: pointer to the first element in the list.
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t length;
	const list_t *current;

	length = 0;
	current = h;
	if (current != NULL)
	{
		current = current->next;
		length++;
	}

	return (length);
}
