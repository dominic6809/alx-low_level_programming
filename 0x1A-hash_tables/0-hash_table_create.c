#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array
 * Return: pointer to newly created hash table, or NULL
 * if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	unsigned long int val;

	if (size == 0)
		return (NULL);

	new_t = malloc(sizeof(hash_table_t));
	if (new_t == NULL)
		return (NULL);

	new_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}

	for (val = 0; val < size; val++)
		new_t->array[val] = NULL;

	new_t->size = size;

	return (new_t);
}
