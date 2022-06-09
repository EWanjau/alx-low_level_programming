#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes a node at specific index
 *@head: pointer of head pointer to memory
 *@index: position to delete a node
 *Return: 1 for success and -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(temp) < index + 1)
	{
		return (-1);
	}
	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
		{
			temp->next->prev = NULL;
		}
		temp->next = NULL;
		free(temp);
		return (1);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = temp->next;
	if (temp->next)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);

	return (1);
}

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
