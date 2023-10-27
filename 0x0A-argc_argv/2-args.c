#include <stdio.h>

/**
 * main - Function that prints all arguments it receives.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
