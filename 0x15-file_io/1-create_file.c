#include "main.h"

/**
 * create_file - Makes a new file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string of chars to input to the file.
 *
 * Return: If the function fails  -1.
 *         Otherwise 1.
 */

int create_file(const char *filename, char *text_content)
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

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
