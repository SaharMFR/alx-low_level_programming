#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print all natural numbers from a given number to 98
 * @n: the given number (int type)
 */
void print_to_98(int n)
{
	int x = n;

	if (x < 98)
	{
		printf("%i,", x);
		x++;

		while (x < 98)
		{
			printf(" %i,", x);
			x++;
		}
	}
	else if (x > 98)
	{
		printf("%i,", x);
		x--;

		while (x > 98)
		{
			printf(" %i,", x);
			x--;
		}
	}
	printf(" %i", 98);
	printf("\n");
}
