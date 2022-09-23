#include "hash.h"

/**
 * key_index - returns the index from a hash function
 * @key: the key
 * @size: the size of array of the hash table
 * 
 * Return: index where the key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);

}
