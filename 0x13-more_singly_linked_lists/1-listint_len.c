#include "lists.h"

/**
 * listint_len - returns the number of nodesin a list
 * @h: the input list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

