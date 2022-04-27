#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the beginning of list
 * @n: the new data
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t **ptr;

	ptr = head;
	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);

	end->n = n;
	while (*ptr)
	{
		ptr = &(*ptr)->next;
	}
	end->next = *ptr;
	*ptr = end;
	return (end);
}
