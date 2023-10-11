#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the shash table.
 * Return: Pointer to the newly created shash table,
 *	or NULL if somthing went wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_table;
	shash_table_t **arr;
	unsigned long int i;

	sh_table = malloc(sizeof(shash_table_t));
	if (sh_table == NULL)
		return (NULL);

	arr = malloc(sizeof(shash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	sh_table->array = arr;
	sh_table->size = size;
	sh_table->shead = NULL;
	sh_table->stail = NULL;

	return (sh_table);
}

/**
 * add_sh - Adds a node in a shash table at a given index.
 * @h: The head of linked list in the shash table.
 * @key: The key.
 * @value: The value associated with the key.
 * Return: Pointer to the created node.
 */
shash_node_t *add_sh(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *temp;

	temp = *h;

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(shash_node_t));
	if (!temp)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;
	*h = temp;

	return (temp);
}

/**
 * add_ll - Adds a node on the linked list of the shash table.
 * @ht: The shash table.
 * @new_node: The new node to add.
 */
void add_ll(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp1, *temp2;
	int r;

	temp1 = ht->shead;
	temp2 = ht->shead;

	while (temp1)
	{
		r = strcmp(new_node->key, temp1->key);
		if (r == 0)
			return;
		else if (r < 0)
		{
			new_node->sprev = temp1->sprev;

			if (temp1->sprev)
				(temp1->sprev)->snext = new_node;
			else
				ht->shead = new_node;

			temp1->sprev = new_node;
			new_node->snext = temp1;

			return;
		}

		temp2 = temp1;
		temp1 = temp1->snext;
	}

	new_node->sprev = temp2;
	new_node->snext = NULL;

	if (ht->shead)
		temp2->snext = new_node;
	else
		ht->shead = new_node;

	ht->stail = new_node;
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The shash table to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	shash_node_t *new_shash_node = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	new_shash_node = add_sh(&(ht->array[i]), key, value);

	if (!new_shash_node)
		return (0)

	add_ll(ht, new_shash_node);

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in shash table.
 * @ht: The shash table to look into.
 * @key: The key to look for.
 * Return: The value associated with the element,
 *	or NULL if `key` couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *temp;

	if (!ht || !key || !(*key))
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	temp = ht->array[i];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The shash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *separator;

	if (!ht)
		return;

	printf("{");
	separator = "";
	temp = ht->shead;

	while (temp)
	{
		printf("%s'%s': '%s'", separator, temp->key, temp->value);
		separator = ", ";
		temp = temp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash tables key/value pairs
 *	in reverse order using the sorted linked list.
 * @ht: The shash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *separator;

	if (!ht)
		return;

	printf("{");
	separator = "";
	temp = ht->stail;

	while (temp)
	{
		printf("%s'%s': '%s'", separator, temp->key, temp->value);
		separator = ", ";
		temp = temp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a shash table.
 * @ht: The shash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp1, *temp2;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp1 = ht->array[i];
		while ((temp2 = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}

	free(ht->array);
	free(ht);
}
