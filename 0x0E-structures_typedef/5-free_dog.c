/**
 * File: 5-free_dog.c
 * Auth: Brennan D 
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the dog to be freed
 */
void free-dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
