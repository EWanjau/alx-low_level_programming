#include "main.h"

/**
 *_realloc - reallocates a block of memory
 *@ptr: pointer to the block of memory
 *@old_size: the current size of memory
 *@new_size: the new size of memory
 *Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr1;
	char *ptr2;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr2 = malloc(new_size);

	if (!ptr2)
		return (NULL);

	ptr1 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr2[i] = ptr1[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr2[i] = ptr1[i];
	}

	free(ptr);
	return (ptr2);
}
