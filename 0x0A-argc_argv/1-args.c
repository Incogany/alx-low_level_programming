#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed to it.
 * @argc: number of arguments.
 * @argv: array of size argc.
 *
 * Return: 0 on success.
 */
int main(int argc, char argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
