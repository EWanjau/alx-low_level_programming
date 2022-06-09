#include "lists.h"

/**
 *insert_dnodeint_at_index - adds data at specific index
 *@h: pointer of head pointer to memory
 *@idx: position to add a new node
 *@n: data to add in the new node
 *Return: address of the new node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *temp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !h)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
