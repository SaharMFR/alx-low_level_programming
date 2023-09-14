#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data
 *	of a doubly linked list.
 * @head: The head of the list.
 * Return: The sum, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
