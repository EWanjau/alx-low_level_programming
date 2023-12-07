#include "lists.h"

/**
 *print_dlistint- prints elements of a d-linked list
 *@h: pointer to head of node memory location
 *Return: number of elements in a d_linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

