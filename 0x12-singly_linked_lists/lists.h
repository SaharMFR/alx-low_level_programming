#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - Singly linked list.
 * @s: the string.
 * @len: the length of the string.
 * @next: pointer to the next node in the list.
 * Description: singly linked list node structure.
 */

typedef struct list_s
{
	char *s;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
