#include "lists.h"

/**
 *free_dlistint - frees memory of nodes
 *@head: pointer of head pointer to memory
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
