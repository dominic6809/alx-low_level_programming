#include "main.h"

/**
 * _strncpy - Copies an inputed number of bytes from str src into dest.
 * @dest: buffer storing the str copy
 * @src: source string.
 * @n: maximum number of bytes copied from src
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p = 0, q = 0;

	while (src[q])
	{
		q++;
	}

	while (p < n && src[p])
	{
		dest[p] = src[p];
		p++;
	}

	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}
