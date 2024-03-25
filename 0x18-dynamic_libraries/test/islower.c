#include "main.h"

/**
 * _islower - Checks if character is lowercase character.
 * @c: The character to be inspected
 * Return: 1 (if c = lowercase), 0 elsewhere.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
