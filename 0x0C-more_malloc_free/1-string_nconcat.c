#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This is a function that concatenates two strings.
 * @s1: this is the first string.
 * @s2: This is the second string.
 * @n: number of bytes from s2 to concatenate to s1.
 * Return: A concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *s1_s2;
	unsigned short i = 0, s1Length = 0, s2Length = 0, s1_s2Length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1Length = strlen(s1);
	s2Length = strlen(s2);

	if (n >= s2Length)
		s1_s2Length = s1Length + s2Length;
	else
		s1_s2Length = s1Length + n;

	s1_s2 = (char *)malloc(s1_s2Length + 1);

	if (s1_s2 != NULL)
	{
	for (i = 0; i <= (s1Length - 1); i++)
		s1_s2[i] = s1[i];

	for (i = 0; i <= (n - 1) && i < s2Length; i++)
		s1_s2[i + s1Length] = s2[i];

	s1_s2[i + s1Length] = '\0';
	}

	return (s1_s2);
}
