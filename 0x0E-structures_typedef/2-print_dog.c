#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Print a 'struct dot'.
 * @d: the struct to print (type struct dog).
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %d\n"), d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
