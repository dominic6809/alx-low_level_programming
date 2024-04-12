#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: The hash table to delete
 * Return: none if successful
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp_node;

	if (ht == NULL)
	return;

	for (i = 0; i < ht->size; i++)
	{
	node = ht->array[i];
	while (node)
	{
	tmp_node = node->next;
	free(node->key);
	free(node->value);
	free(node);
	node = tmp_node;
	}
	}

	free(ht->array);
	free(ht);
}
