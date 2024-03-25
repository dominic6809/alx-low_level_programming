#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src to a buffer pointed to by @dest
 *           It includes the terminating null byte.
 * @dest: A buffer to copy the string to.
 * @src: A source string to copy.
 * Return: A pointer to @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int y;

	while (src[len] != '\0')
	{
		len++;
	}

	for (y = 0; y <= len; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
