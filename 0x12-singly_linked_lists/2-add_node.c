#include "lists.h"

/**
 * add_node - add at beginning of linked list
 * @head: the start of linked list
 * @str: input data
 * Return:  address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
		return (NULL);
	list_t *temp = malloc(sizeof(list_t));

	temp->str = strdup(str);
	temp->next = NULL;

	temp->next = head;
	head = temp;

	return (head);

}
