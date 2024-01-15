#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: char to check
 * Return: if uppercase return 1, also return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
