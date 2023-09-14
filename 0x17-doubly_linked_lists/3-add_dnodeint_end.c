#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly
 *	linked list.
 * @head: The pointer to the head of the list.
 * @n: The number to add in the node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node;

	node = *head;
	new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		new->next = NULL;

		if (node)
		{
			while (node->next)
				node = node->next;

			node->next = new;
		}
		else
		{
			*head = new;
		}

		new->prev = node;
	}

	return (new);
}
