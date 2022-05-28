#include "dog.h"
#include "stdio.h"

/**
 * free_dog - frees memory
 * @d: input
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
