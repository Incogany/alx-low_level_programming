#include <stdarg.h>
#include <stdio.h>
#include "variadic_function.h"
/**
 * print_numbers - prints all the given nu,mbers
 * @separator: define character to separate the numbers
 * @n: number of numbes to be printed
 * Return: a string with numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argument;

	va_start(arguments, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(arguments, int));
		if (i < n && separator)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(argumnents);
}
