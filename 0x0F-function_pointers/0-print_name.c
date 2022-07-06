#include <stdio.h>
#include <stdlib.h>
#include "funtion_pointers.h"

/**
 * print_name - prints a name depends of the function
 * @name: points to name string
 * @f: points to funtion
 *
 * Return: the string initialized
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
