#include "lists.h"

/**
 * print_listint - prints list of integers
 * @h: the input list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}
