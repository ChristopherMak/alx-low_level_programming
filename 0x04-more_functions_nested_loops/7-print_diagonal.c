#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in terminal
 *
 * @n: number
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int ln, sp;

if (n <= 0)
{
_putchar('\n');
}

else
{

for (ln = 1; ln <= n; ln++)
{

for (sp = 1; sp < ln; sp++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
