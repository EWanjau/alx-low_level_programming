#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: pointer to head pointer
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *current;

	if (!head)
		return (NULL);
	ptr = NULL;
	while (*head)
	{
		current = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = current;
	}
	*head = ptr;
	return (*head);
}
