#include "dog.h"
#include "stdio.h"

/**
 * free_dog - freees memory
 * @d: input
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
