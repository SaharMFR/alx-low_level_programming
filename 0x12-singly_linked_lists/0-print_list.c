#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all the elements of a 'list_t' list.
 * @h: pointer to the first element in the list.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t len;
	const list_t *current;

	len = 0;
	current = h;
	while (current != NULL)
	{
		if (current->s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->s);

		current = current->next;
		len++;
	}

	return (len);
}
