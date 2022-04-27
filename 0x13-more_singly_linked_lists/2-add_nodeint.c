#include "lists.h"

/**
 * add_nodeint - adds an integer at beginning of a list
 * @head: the address of head
 * @n: the integer added
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
