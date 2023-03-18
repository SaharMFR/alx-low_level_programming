#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
