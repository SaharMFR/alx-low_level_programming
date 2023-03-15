#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenate all the arguments passed to it.
 * each argument followed by a new line.
 * @ac: the number of the arguments (type int).
 * @av: 2d array.
 * Return: pointer to a new string, NULL if it fails of ac == 0
 * or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	char *arr, *retp;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	arr = malloc(total * sizeof(char));
	if (arr == NULL)
		return (NULL);

	retp = arr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*arr = av[i][j];
			arr++;
		}
		*arr = '\n';
		arr++;
	}

	return (retp);
}
