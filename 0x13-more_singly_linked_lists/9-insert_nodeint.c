#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at nth place
 * @head: pointer to head pointer
 * @idx: position to insert node
 * @n: number to be inserted
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!idx)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		ptr = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (i < idx - 1 && !ptr)
				return (NULL);
			ptr = ptr->next;
		}
		new->n = n;
		new->next = ptr->next;
		ptr->next = new;
	}
	return (new);
}
