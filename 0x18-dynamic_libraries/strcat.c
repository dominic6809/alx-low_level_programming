#include "main.h"

/**
 * _strcat - Concats two strings
 * @dest: pointer to the string to be concatenated upon.
 * @src: source str to be appended to @dest.
 * Return: (pointer) to the destination str @dest.
 */
char *_strcat(char *dest, char *src)
{

	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	}
	return (dest);
}
