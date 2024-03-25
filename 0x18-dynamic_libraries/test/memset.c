#include "main.h"

/**
 * _memset - Fills a memory area with a constant byte
 * @s: pointer to the memory address area to fill.
 * @b: constant byte to be used.
 * @n: maximum number of bytes to fill.
 * Desc: Fills the first @n bytes of the memory area pointed to by @s with @b.
 * Return: (Pointer) to the mem area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (n > 0)
	{
		s[k] = b;
		k++;
		n--;
	}

	return (s);
}
