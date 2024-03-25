#include "main.h"

/**
 * _isdigit - Checks for a digit from 0 to 9.
 * @c: char to be checked
 * Return: 1 (if c = digit), 0 either.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
