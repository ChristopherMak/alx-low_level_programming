#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the pointer that points to the string
 * Return: 0
 */

void rev_string(char *s)
{
	int length, z, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	z = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}