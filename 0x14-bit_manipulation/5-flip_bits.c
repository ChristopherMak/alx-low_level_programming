#include "main.h"

/**
 * flip_bits - A funct that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to be changed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, num = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			num++;
	}

	return (num);
}
