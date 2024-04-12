#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: The hash table to print.
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int val;
	hash_node_t *node;
	int counter = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (val = 0; val < ht->size; val++)
	{
		node = ht->array[val];
		while (node != NULL)
		{
		if (!counter)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		counter = 0;
		node = node->next;
		}
	}
	printf("}\n");
}
