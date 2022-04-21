#include "lists.h"

/**
 * list_len - shows number of elements
 * @h: pointer to head
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("Error\n");
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
