#include "lists.h"

/**
 *dlistint_len- counts elements of a d-linked list
 *@h: pointer to head of node memory location
 *Return: number of elements in a d_linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

