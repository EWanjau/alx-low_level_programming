#include "lists.h"

/**
 * print_list - prints elemeents of a linked list
 * @list_t: input list
 * @h: pointer to head
 * Return: count
 */ 
size_t print_list(const list_h *h)
{	
	if (h == NULL)
	{
		printf("The List is empty");
		return;
	}
	struct list_h *ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		if (str == NULL)
			printf("[0](nil)");
		printf("%d %s", ptr->len, ptr->str);
		ptr = ptr->next;
	}

}
