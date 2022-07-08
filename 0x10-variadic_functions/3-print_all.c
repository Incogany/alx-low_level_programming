#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h> 
/**
 * print_all - prints all the given strings
 * @format: the kind c for char s for sting i for int f for float
 * Return: a string with the arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s, *separator;
	va_list args;

	va_start(args, format);

	separatorn= "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
