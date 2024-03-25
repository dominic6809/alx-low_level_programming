#include "main.h"

/**
 * _strncpy - Copies an inputed number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
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
