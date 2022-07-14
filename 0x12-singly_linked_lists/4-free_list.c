#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list  - Releases the memory allocated for list
 *
 * @head: A pointer to the first node of the lsit to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

