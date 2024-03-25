#include "main.h"

/**
 * _memcpy - Copies memory address area
 * @dest: Pointer to the destination memory where stored.
 * @src: Pointer to the source memory to be copied.
 * @n: number of bytes to copy in memory.
 * Return: ptr(dest) to the destination memory on success, -1 failure.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int dig;

	while (dig < n)
		{
			dest[dig] = src[dig];
			dig++;
		}

	return (dest);
}
