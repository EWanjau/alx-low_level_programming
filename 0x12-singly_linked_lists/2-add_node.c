#include "lists.h"

/**
 * add_node - add at beginning of linked list
 * @head: the start of linked list
 * @str: input data
 * Return:  address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	(*head) = temp;

	return (*head);

}
