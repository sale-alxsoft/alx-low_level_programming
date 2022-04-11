#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: a pointer of type dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

