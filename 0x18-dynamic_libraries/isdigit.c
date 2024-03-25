#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to be checked
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
