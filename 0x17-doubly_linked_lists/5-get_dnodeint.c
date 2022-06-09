#include "lists.h"

/**
 *get_dnodeint_at_index - searches for a node in a certain index
 *@head: pointer of head pointer to memory
 *@index: the position of node we search
 *Return: the pointer to node a specified index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
