#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given
 *	position in a doubly linked list.
 * @h: The pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The number to add in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new;
	unsigned int i;

	node = *head;
	new = malloc(sizeof(dlistint_t));
	i = 0;

	if (i == idx)
	{
		new = add_dnodeint(h, n);
	}
	else if (new)
	{
		new->n = n;

		for (; i != idx; i++)
		{
			if (!(node->next) && (idx == i + 1))
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			else if (!(node->next))
			{
				return (NULL);
			}
			node = node->next;
		}

		new->next = node;
		new->prev = node->prev;
		node->prev = new;
		(new->prev)->next = new;
	}

	return (new);
}
