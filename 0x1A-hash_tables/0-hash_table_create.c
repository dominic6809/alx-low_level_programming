#include "hash_tables.h"

/**
 * hash_table_create - a function to create a hash table
 * @size: the size of the array
 *
 * Return: Pointer to the newly created hash table, or NULL
 * if a compilation error occurs.
 */
hash_table *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;

	if (size == 0)
		return (NULL);

	new_t = calloc(1,sizeof(hash_table_t));
	if (new_t == NULL)
	{
		return (NULL);
	}

	new_t->size = size;
	new_t->array = calloc(size, sizeof(hash_node_t*));
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}
	return (new_t);
}
