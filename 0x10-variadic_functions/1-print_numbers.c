#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints all the given nu,mbers
 * @separator: define character to separate the numbers
 * @n: number of numbes to be printed
 * Return: a string with numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	
	printf("\n");

	va_end(numbers);
}
