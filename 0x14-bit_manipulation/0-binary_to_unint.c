#include <stdio.h>
#include "main.h"

/**
 * binary_to_unint - Function that a binary number to an unsigned int.
 * Prototype: unsigned int binary_to_unint(const char *b);
 * @b: is pointing to a string of 0 and 1 chars
 * Returns: the converted  number, or 0 if
 * -> there is one or more chars in the string b that is not 0 or 1
 * -> b is NULL
 */
unsigned int binary_to_unint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;
		if (* != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
		b++;
	}
	return (value);
}
