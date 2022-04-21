#include "lists.h"

/**
 * add_node_end - adds a node at end of list
 * @str: data to be added
 * @head: beginning of list
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	temp = malloc(sieof(list_t));

	temp->str = strdup(str);
	temp->next = NULL;
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->link = temp;
}
