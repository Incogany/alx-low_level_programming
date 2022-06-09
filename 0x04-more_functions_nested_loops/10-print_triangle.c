#include "main.h"

/**
 * print_triangle - function that drwas a triangle on the terminal.
 *
 * @size: where size is the size of the triangle,
 *
 * Return: 0.
 */
void print_triangle(int size)
{
	int r, c, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < size; r++)
		{
			for (c = size - r; c > 1; c--)
				_putchar(' ');
			for (k = 0; k <= r; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
