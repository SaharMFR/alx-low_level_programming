#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a linked list.
 * @head: pointer to the first element in the linked list.
 * @n: data to be stored in the new node (type int).
 * Return: the address of the new element, or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
