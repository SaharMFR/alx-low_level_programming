#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Create a newly allocated space in memory
 * which contains a copy of the string given.
 * @str: the string given (char type string).
 * Return : pointer to the new string, NULL if str = NULL
 * of if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *arr;
	int i, j;

	if (i = 0; str[i] != '\0'; i++)
		;

	arr = malloc((sizeof(*arr) * i) + 1);
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		arr[j] = str[j];
	arr[j] = '\0';

	return (arr);
}
