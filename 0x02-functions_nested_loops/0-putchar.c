#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *i= "Main";

	while (*i)
	{
		_putchar(*i);
		i++;
	}
	_putchar('\n');

	return (0);
}
