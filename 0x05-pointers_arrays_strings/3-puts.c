#include "main.h"

/**
 * _puts - Prints a string to the console.
 * @str: The string to be printed.
 * Return: string and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
