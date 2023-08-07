#include "main.h"

/**
 * append_text_to_file - Entry point
 *
 * @filename: A pointer to the name of the file.
 *
 * @text_content: The string to add to the end of the file.
 *
 * Description: function that appends text at the end of a file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdis, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fdis = open(filename, O_WRONLY | O_APPEND);
	w = write(fdis, text_content, length);

	if (fdis == -1 || w == -1)
		return (-1);

	close(fdis);

	return (1);
}
