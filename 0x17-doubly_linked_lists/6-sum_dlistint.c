#include "lists.h"

/**
 *sum_dlistint - sums the data in s d-linked list
 *@head: pointer of head pointer to memory
 *Return: sum of data in d-linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
