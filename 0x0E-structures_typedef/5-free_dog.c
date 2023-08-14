#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function to free dog mem
 * @d: pointer to dog struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
