#include "main.h"

/**
 * read_textfile - Entrey point
 *
 * @filename: char pointer
 *
 * @letters: sizet
 *
 * Description: unction that reads a text file and
 * prints it to the POSIX standard output
 *
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filepointer;
	ssize_t w;
	ssize_t t;

	filepointer = open(filename, O_RDONLY);
	if (filepointer == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	t = read(filepointer, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(filepointer);
	return (w);
}

