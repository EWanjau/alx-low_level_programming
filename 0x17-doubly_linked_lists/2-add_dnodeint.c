#include "lists.h"

/**
 *add_dnodeint - adds a node at the beginning of the list
 *@head: the pointer to pointer of head pointer to memory
 *@n: the number to insert
 *Return: the address of new node at theh beginning
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
