#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *	of a doubley linked list.
 * @head: The pointer to the head of the list.
 * @n: The number to add in the node.
 * Return: The address of the new element, NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *first_node;

	first_node = *head;
	node = malloc(sizeof(dlistint_t));

	if (node)
	{
		node->n = n;
		node->prev = NULL;
		node->next = first_node;

		if (first_node)
			first_node->prev = node;

		*head = node;
	}

	return (node);
}
