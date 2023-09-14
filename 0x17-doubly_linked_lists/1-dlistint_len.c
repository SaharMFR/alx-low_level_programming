#include "lists.h"

/**
 * dlistint_len - Counts the elements of a doubly linked list.
 * @h: The pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nNodes;

	nNodes = 0;

	while (h)
	{
		nNodes++;
		h = h->next;
	}

	return (nNodes);
}
