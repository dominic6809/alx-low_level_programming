#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds element to the hash table.
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if successful, 0 error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int val;
	hash_node_t *new_n, *tmp_node;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
	return (0);

	val = key_index((unsigned char *)key, ht->size);

	tmp_node = ht->array[val];
	while (tmp_node)
	{
	if (strcmp(tmp_node->key, key) == 0)
	{
	free(tmp_node->value);
	tmp_node->value = strdup(value);
	if (tmp_node->value == NULL)
	return (0);
	return (1);
	}
	tmp_node = tmp_node->next;
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
	return (0);
	new_n->key = strdup(key);
	if (new_n->key == NULL)
	{
	free(new_n);
	return (0);
	}
	new_n->value = strdup(value);
	if (new_n->value == NULL)
	{
	free(new_n->key);
	free(new_n);
	return (0);
	}
	new_n->next = ht->array[val];
	ht->array[val] = new_n;
	return (1);
}
