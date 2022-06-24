#include <stdio.h>
/**
 * main - prints al argumnets it receives.
 * @argc: number of argumnets received
 * @argv: array of size argc, containing all arguments received
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
		int count;

		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
		return (0);
}
