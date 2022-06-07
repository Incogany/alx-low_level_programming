#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char main[] = "Main";
	int i = 0;

	while (main[i] != '\0')
	{
		_putchar(main[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
