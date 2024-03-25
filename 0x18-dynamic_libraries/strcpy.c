#include "main.h"

/**
 * _strcpy - a code that copies a str pointed to by @src to a buffer pointed to by
 *  @dest which includes the terminating null byte.
 * @dest: buffer to copy the string to.
 * @src: source string to be copied.
 * Return: pointer to @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int num = 0;
	int y = 0;

	while (src[num] != '\0')
	{
		num++;
	}

	for (; y <= num; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
