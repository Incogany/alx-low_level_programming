#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - initializes memory spaces with zero
 * @min: string 1.
 * @max: string, concatenated string
 *
 * Return: pointer to the concatenated string
 */
int *array_range(int min, int max)
{
	int *newArray;
	int i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	newArray = malloc(length * sizeof(int));
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		*(newArrray + i) = min;
		min++;
	}

	return (newArray);
}

