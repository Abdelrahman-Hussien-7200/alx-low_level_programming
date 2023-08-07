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
	int fdis, w, length_text = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length_text = 0; text_content[length_text];)
			lenght_text++;
	}

	fdis = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fdis, text_content, length_text);

	if (fdis == -1 || w == -1)
		return (-1);

	close(fdis);

	return (1);
}
