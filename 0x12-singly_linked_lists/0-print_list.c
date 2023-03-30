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

	len = 0;
	while (h != NULL)
	{
		if (h->s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->s);
		h = h->next;
		len++;
	}
	return (len);
}
