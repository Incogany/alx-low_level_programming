#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: uppercase character.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}

	return (0);
}
