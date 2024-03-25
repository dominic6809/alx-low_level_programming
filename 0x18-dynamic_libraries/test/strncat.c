#include "main.h"

/**
 * _strncat - concats two strings using maximum n bytes from src
 * @dest: maximum bytes required
 * @src: number of bytes used
 * @n: input value
 * Return: dest on success, -1 failure
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
