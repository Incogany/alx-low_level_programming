#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a funtion given as a parameter on each element of an array.
 * @array: pointer to the array
 * @size: size of array
 * @action: function to execute
 * Return: the function executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
