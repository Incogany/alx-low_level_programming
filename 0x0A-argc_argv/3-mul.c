#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication followec by a new line
 * @argc: number of arguments passed
 * @argv: array of size argc containing argumnts passed
 *
 * Return: 0 on success
 * 1 on error
 */
int main(argc, char *argv[])
{
	int a, b, product;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;

		printf("%d\n", product);

		return (0);
	}
	printf("Error\n");
	return (1);
}
