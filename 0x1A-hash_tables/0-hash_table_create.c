#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;

	if (size == 0)
		return (NULL);

	head = malloc(sizeof(hash_table_t));
	if (!head)
		return (NULL);

	head->size = size;
	head->array = calloc((size_t)head->size, sizeof(hash_node_t *));
	if (head->array == NULL)
		return (NULL);

	return (head);
}
