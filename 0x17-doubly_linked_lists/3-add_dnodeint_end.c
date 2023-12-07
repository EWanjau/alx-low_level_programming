#include "lists.h"

/**
 *add_dnodeint_end - adds a node at the end of the list
 *@head: the pointer to pointer of head pointer to memory
 *@n: the number to insert
 *Return: the address of new node at the end of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

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
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
