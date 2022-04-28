#include "lists.h"
#include "stddef.h"

/**
 * print_list - prints elemeents of a linked list
 * @h: pointer to head
 * Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}
	return (count);
}
