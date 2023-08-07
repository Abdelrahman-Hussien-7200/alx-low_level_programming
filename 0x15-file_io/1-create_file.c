#include "main.h"

/**
 * create_file - Entry point
 *
 * @filename: A pointer to the name of the file
 *
 * @text_content: A pointer to a string
 *
 * Description:  a function that creates a file
 *
 * Return: If the function fails - -1 Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fds, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fds = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fds, text_content, len);

	if (fds == -1 || w == -1)
		return (-1);

	close(fds);

	return (1);
}
