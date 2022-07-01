#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - initializes memeory spaceswith zero.
 * @memb: strin g 1
 * @size: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string
 */
void *_calloc(unsigned int memb, unsigned int size)
{
	unsigned int i;
	char *newArray;

	if (memb == 0 || size == 0)
		return (NULL);

	newArray = malloc(memb * size);
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < (memb * size); i++)
	{
		*(newArray + i) = 0;
	}

	return (newArray);
}
