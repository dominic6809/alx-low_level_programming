#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array
 * 
 * Return: A pointer to the newly created hash table
 *         or NULL if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int val;

	hash_table_t *new_t = malloc(sizeof(hash_table_t));

	if (new_t == NULL)
		return (NULL);

	new_t->size = size;
	new_t->array = malloc(sizeof(hash_node_t *) * size);

	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}

	for (val = 0; val < size; val++)
		new_t->array[val] = NULL;

	return (new_t);
}
