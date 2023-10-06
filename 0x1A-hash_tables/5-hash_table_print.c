#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *separator;

	if (ht == NULL)
		return;

	printf("{");
	separator = "";

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", separator, temp->key, temp->value);
			separator = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
