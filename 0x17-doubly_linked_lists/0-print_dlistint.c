#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: The pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nNodes;

	nNodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nNodes++;
		h = h->next;
	}

	return (nNodes);
}
