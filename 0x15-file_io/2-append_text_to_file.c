#include "main.h"

/**
 * append_text_to_file - A funct that appends text at the end of a file.
 * @filename: The filename.
 * @text_content: The text to be appended to the file.
 * Return: 1 upon success or -1 upon failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	if (!text_content)
	{
		close(op);
		return (1);
	}

	wr = write(op, text_content, strlen(text_content));
	if (wr == -1 || wr != strlen(text_content))
	{
		close(op);
		return (-1);
	}

	close(op);
	return (1);
}
