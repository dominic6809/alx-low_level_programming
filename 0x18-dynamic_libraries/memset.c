#include "main.h"

/**
 * _memset - Fills a memory area with a constant byte
 * @s: Pointer to the memory area to fill.
 * @b: The constant byte to be used.
 * @n: Maximum number of bytes to fill.
 * Description: Fills the first @n bytes of the memory area pointed to by @s
 * with the constant byte @b.
 * Return: Pointer to the memory area @s.
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
