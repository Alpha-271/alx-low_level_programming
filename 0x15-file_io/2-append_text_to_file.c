#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file without overwriting.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist and the user lacks write permissions -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length; text_content[length];)
			length++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
