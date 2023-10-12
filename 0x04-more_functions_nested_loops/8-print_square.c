#include "main.h"

/**
 * print_square - Prints a square
 *
 * @size: The size of the square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
int ln, r;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (ln = 1; ln <= size; ln++)
{
_putchar('#');

for (r = 2; r <= size; r++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
