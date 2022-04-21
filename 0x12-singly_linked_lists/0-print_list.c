#include "lists.h"
#include "stddef.h"

/**
 * print_list - prints elemeents of a linked list
 * @list_t: input list
 * @h: pointer to head
 * Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("Error\n");
	}
	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else 
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
