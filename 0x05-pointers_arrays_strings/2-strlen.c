#include "main.h"

/**
 * _strlen - Returning the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\n')
	{
		c++;
	}

	return (c);
}
