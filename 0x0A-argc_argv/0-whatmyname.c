#include <stdio.h>
/**
 * main - prints the name of this program
 * @argc: counts number of arguments passed in the command line
 * @argv: stores arguments passed in the commandline.
 *
 * Return: 0 on sucess.
 */
int main(int argc, char argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
