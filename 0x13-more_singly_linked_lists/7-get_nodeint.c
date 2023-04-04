#include "lists.h"

/**
 * get_nodeint_at_index - Find the node at a certain index in a linked list.
 * @head: first node in the linked list.
 * @index: the index (type int).
 * Return: pointer to the node with the provided index, or NULL if the node
 * does not exit.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
