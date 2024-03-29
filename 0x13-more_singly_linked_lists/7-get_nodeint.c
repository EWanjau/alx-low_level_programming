#include "lists.h"

/**
 * get_nodeint_at_index - lists the selected node
 * @head: the pointer to head
 * @index: the specific node
 * Return: the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;

	for (i = 0; i < index; i++)
	{
		if (!ptr)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}

