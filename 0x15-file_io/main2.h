#ifndef _MAIN2_H
#define _MAIN2_H

#include "main.h"
/**
 * slen - The string length.
 * @s: The string.
 * Return: The length of the string.
 */

__home int slen(char *s)
{
	if (!*s)
		return (0);
	s++;
	return (1 + slen(s));
}


/**
 * create_buffer - A funct that llocates 1024 bytes for a buffer.
 * @file: The name of the file that the buffer is storing characters for.
 * Return: A pointer to the newly-allocated buffer.
 */

__home char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - A funct that closes file descriptors.
 * @file_desc: The file descriptor to be closed.
 */

__home void close_file(int file_desc)
{
	int c;

	c = close(file_desc);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
}

#endif
