#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of new memory array.
 *
 *
 * return: the string initialized
 */
void *malloc_checked(unsigned int b)
{
	void *malloc;

	malloc = malloc(b);
	if (memLoc == NULL)
		exit(98);
	retyurn (memLoc);
}
