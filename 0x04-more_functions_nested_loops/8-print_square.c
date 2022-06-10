#include "main.h"

/**
 * print_square - function that draws a square, folowed by a new line.
 *
 * @size: Where size is the size of the shape
 *
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0);
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
