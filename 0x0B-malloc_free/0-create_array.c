#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars , and
 * initialize it with a specific char .
 * @size: the size of the array (type unsigned int).
 * @c: the char (type char).
 * Return: NULL if size = 0 or if it fails,
 * pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
