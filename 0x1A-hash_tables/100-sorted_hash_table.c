#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table,
 * or NULL incase of an error.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int val;
	shash_table_t *new_t = malloc(sizeof(shash_table_t));

	if (new_t == NULL)
	return (NULL);

	new_t->size = size;
	new_t->array = malloc(sizeof(shash_node_t *) * size);

	if (new_t->array == NULL)
	{
	free(new_t);
	return (NULL);
	}
	new_t->shead = NULL;
	new_t->stail = NULL;

	for (val = 0; val < size; val++)
	new_t->array[val] = NULL;

	return (new_t);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key. It cannot be an empty string.
 * @value: The value associated with the key.
 * Return: 1 success, 0 error.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int pos;
	shash_node_t *new_n, *current_n, *prev;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
	return (0);

	pos = key_index((unsigned char *)key, ht->size);

	new_n = malloc(sizeof(shash_node_t));

	if (new_n == NULL)
	return (0);

	new_n->key = strdup(key);
	new_n->value = strdup(value);

	if (new_n->key == NULL || new_n->value == NULL)
	{
	free(new_n->key);
	free(new_n->value);
	free(new_n);
	return (0);
	}

	current_n = ht->shead, prev = NULL;

	while (current_n && strcmp(current_n->key, key) < 0)
	{
	prev = current_n;
	current_n = current_n->snext;
	}

	new_n->snext = current_n;

	if (prev)
	{
	prev->snext = new_n;
	new_n->sprev = prev;
	}
	else
	{
	ht->shead = new_n;
	new_n->sprev = NULL;
	}

	if (current_n)
	{
	current_n->sprev = new_n;
	}
	else
	{
	ht->stail = new_n;
	}

	if (ht->array[pos] == NULL)
	ht->array[pos] = new_n;
	else
	{
	new_n->next = ht->array[pos];
	ht->array[pos] = new_n;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The sorted hash table.
 * @key: The key you are looking for.
 * Return: The value associated with the element,
 * or NULL if key was not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int pos;
	shash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	return (NULL);

	pos = key_index((unsigned char *)key, ht->size);
	node = ht->array[pos];

	while (node)
	{
	if (strcmp(node->key, key) == 0)
	return (node->value);
	node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table.
 * Return: none
 */
void shash_table_print(const shash_table_t *ht)
{
	int counter = 0;
	shash_node_t *node = ht->shead;

	if (ht == NULL)
	return;

	printf("{");
	while (node)
	{
	if (counter == 1)
	printf(", ");
	printf("'%s': '%s'", node->key, node->value);
	counter = 1;
	node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table.
 * Return: none
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int counter = 0;
	shash_node_t *node = ht->stail;

	if (ht == NULL)
	return;

	printf("{");
	while (node)
	{
	if (counter == 1)
	printf(", ");
	printf("'%s': '%s'", node->key, node->value);
	counter = 1;
	node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp_node;
	unsigned long int val;

	if (ht == NULL)
	return;

	for (val = 0; val < ht->size; val++)
	{
	node = ht->array[val];
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
