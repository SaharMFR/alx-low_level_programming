#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - Free dogs.
 * @d: pointer to the object to free (type struct dog / dog_t).
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
