#include <stdio.h>

/**
 * main - Function that prints the number of arguments.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
