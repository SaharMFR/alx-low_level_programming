#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - Add a new node at the beginning of `list_t` list.
 * @head: double pointer to the first element in the list.
 * @str: string to be saved in new node, need to be duplicated.
 * Return: the address of the new element ,or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int length;

	while (str[length] != NULL)
		length++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(new_Node);
		return (NULL);
	}

	newNode->s = strdup(str);
	if (newNode->s == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = length;
	newNode->next = (*head);

	(*head) = newNode;
	return (*head);
}
