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
	int f;
	int c;

	if (size > 0)
		for (f = 0; f < size; f++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	else
	{
		_putchar ('\n);
	}
}
