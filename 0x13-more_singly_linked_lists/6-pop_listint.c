#include "lists.h"

/**
 * pop_listint - removes the head of a list
 * @head: pointer to head pointer
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	ptr = *head;
	data = 0;

	if (ptr)
	{
		*head = (*head)->next;
		data = ptr->n;
		free(ptr);
	}
	return (data);
}
