#include "main.h"

/**
 * _isalpha - function to check for an alphabetic letter.
 * @c: character to be checked.
 * Return: 1 (alphabet = lower/upper), 0 oherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
