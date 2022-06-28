#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Intializes with 0 a matrix
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <=)
		return (NULL);

	matrix = (int **) malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(matrix + 1) = (int *) malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(matrix + j));
			free(matrix);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(matrix + i) + j) =0;

	return (matrix);
}
