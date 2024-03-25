#include "main.h"
#include "stdio.h"

/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: the substring to search for
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *o = haystack;
		char *t = needle;

		while (*o == *t && *t != '\0')
		{
			o++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (NULL);
}
