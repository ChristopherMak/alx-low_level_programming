#include "main.h"

/**
 * _strncpy - the function that copies a string.
 * @dest: the destination string pointer.
 * @src: the source string pointer.
 * @n: the number of bytes to be used.
 *
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int count_of_bytes;

for (count_of_bytes = 0; count_of_bytes < n && src[count_of_bytes] != '\0'; count_of_bytes++)
dest[count_of_bytes] = src[count_of_bytes];

for (; count_of_bytes < n; count_of_bytes++)
dest[count_of_bytes] = '\0';

return (dest);
}
