#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: s is a character
 * Return: value ius i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - and a new node at the end of a list_t list
 * @head: head of a list_t list
 * @str: value to insert into element
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *pointer;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = strlen(str);
	add->next = NULL;

	if (*head == NULL)
	{
		*head == NULL;
		return (add);
	}

	pointer = *head;
	while (pointer->next)
	{
		pointer = pointer->next;
	}
	pointer->next = add;
	return (add);
}
