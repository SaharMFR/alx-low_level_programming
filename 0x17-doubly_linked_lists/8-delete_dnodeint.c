#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 *	in a doubly linked list.
 * @head: The pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	node = *head;
	i = 0;

	if (i == index)
	{
		(node->next)->prev = NULL;
		*head = node->next;
		free(node);

		return (1);
	}
	else if (node)
	{
		while (i != index)
		{
			if (!node)
				return (-1);

			node = node->next;
			i++;
		}

		(node->next)->prev = node->prev;
		(node->prev)->next = node->next;
		free(node);

		return (1);
	}

	return (-1);
}
