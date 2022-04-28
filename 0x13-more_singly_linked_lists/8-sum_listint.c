#include "lists.h"

/**
 * sum_listint - sum all data in a linked list
 * @head: pointer to head of list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
