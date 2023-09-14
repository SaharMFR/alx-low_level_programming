#include "lists.h"

/**
 * get_dnodeint_at_index - Finds the node in a specific
 *	index in a doubly linked list.
 * @head: The head of the list.
 * @index: The index of the node to find.
 * Return: The address of the node in that index,
 *	or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (i != index && head)
	{
		head = head->next;
		i++;
	}

	return (head);
}
