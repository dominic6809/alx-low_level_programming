#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int val = 0, dest_len = 0;

	while (dest[val++])
		dest_len++;

	for (val = 0; src[val] && val < n; val++)
		dest[dest_len++] = src[val];

	return (dest);
}
