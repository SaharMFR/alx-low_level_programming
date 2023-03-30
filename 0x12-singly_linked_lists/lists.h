#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_t - Singly linked list.
 * @s: the string.
 * @len: the length of the string.
 * @next: pointer to the next node in the list.
 */

typedef struct list_t
{
	char *s;
	unisgned int len;
	struct list_t *next;
};

size_t print_list(const list_t *h);

#endif
