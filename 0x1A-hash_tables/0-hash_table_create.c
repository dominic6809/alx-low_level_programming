#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table, or NULL
 * if a compilation error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *new_tl = malloc(sizeof(hash_table_t));

	if (new_tl == NULL)
		return (NULL);

	new_tl->size = size;
	new_tl->array = malloc(sizeof(hash_node_t *) * size);

	if (new_tl->array == NULL)
	{
		free(new_tl);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_tl->array[i] = NULL;

	return (new_tl);
}
