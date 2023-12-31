#include "main.h"

/**
 * create_file - A funct that creates a file with given text content.
 * @filename: A pointer to the file to be created.
 * @text_content: A NULL-terminated string to write to the file.
 * Return: 1 upon success or -1 upon failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, result = 1, num = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{

		while (text_content[num])
		num++;
	result = write(file, text_content, num);
	}

	if (result == -1)
		return (-1);
	close(file);
	return (1);
}
