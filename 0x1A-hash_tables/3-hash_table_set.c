#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *new_hash_node = NULL, *temp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}

	new_hash_node = malloc(sizeof(*new_hash_node));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	new_hash_node->next = ht->array[i];
	ht->array[i] = new_hash_node;

	return (1);
}
