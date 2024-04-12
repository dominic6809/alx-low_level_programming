#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: The key to calculate the index for.
 * @size: The size of the hash table array.
 * Return: calculated index for the key, -1 error
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
