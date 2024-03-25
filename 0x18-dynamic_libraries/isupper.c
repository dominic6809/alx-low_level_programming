#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for an uppercase alphabet.
 * @c: The character to be checked.
 * Return: 1 (if c = uppercase), 0 else.
 */
int _isupper(int c)
{
	if ( c <= 'Z' && c >= 'A' )
		return (1);
	else
		return (0);
}
