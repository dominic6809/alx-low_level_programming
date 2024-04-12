#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to search for.
 * Return: The value associated with the key, 
 * or NULL if key was not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int val;
	hash_node_t *current_n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	val = key_index((unsigned char *)key, ht->size);

	current_n = ht->array[val];
	while (current_n != NULL)
	{
		if (strcmp(current_n->key, key) == 0)
			return (current_n->value);
		current_n = current_n->next;
	}
	return (NULL);
}
