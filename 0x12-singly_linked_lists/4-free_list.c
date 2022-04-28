#include "lists.h"

/**
 * free_list - free heap memory
 * @head: pointer to head of list
 * Return: void;
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
