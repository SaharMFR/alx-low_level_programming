#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key.
 * @size: the size of the array of the hash table.
 * Return: The index at which the key/value pair should be
 *	stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
