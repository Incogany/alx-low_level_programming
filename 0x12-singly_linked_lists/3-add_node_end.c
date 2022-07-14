#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: s is a character
 * Return: value ius i
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*(s + length))
		length++;
	return (length);
}
/**
 * add_node_end - and a new node at the end of a list_t list
 * @head: head of a list_t list
 * @str: value to insert into element
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
