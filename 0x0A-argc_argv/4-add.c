#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds and prints sum of positive numbers
 * followed by a new line.
 * @argc: number of arguments passed.
 * @argv: pointer to array of size argc, containing
 * arguments passed
 *
 * Return: 0 on success
 * 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	if (argc > 1)
		for (i = 1; 1 < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
				if (argv[i][j] < '0' || argv[i][j] > '9')
					return (printf("Error\n"), 1);
			res += atoi(argv[i]);
		}
	printf("%i\n", res);
	return (0);
}
