#include "lists.h"

/**
 * listint_len - returns the number of nodesin a list
 * @h: the input list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

