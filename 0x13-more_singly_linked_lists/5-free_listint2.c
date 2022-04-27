#include "lists.h"
#include "stdlib.h"

/**
 * free_listint - frees memory
 * @head: address of start of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
