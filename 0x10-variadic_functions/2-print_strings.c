#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints all the given strings 
 * @separator: define character to sepate the strings
 * @n: number of strings to be printed
 * Return: a string with strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *s;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n -1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
