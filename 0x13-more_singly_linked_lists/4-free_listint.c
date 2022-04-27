#include "lists.h"
#include "stdlib.h"

/**
 * free_listint - frees memory
 * @head: address of start of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
