#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of file
 * @letters: num of bytes
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *text;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd  == -1)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
	close(fd);
	return (0);
	}
	n_read = read(fd, text, letters);
	if (n_read == -1)
	{
	free(text);
	close(fd);
	return (0);
	}

	n_written = write(STDOUT_FILENO, text, n_read);
	free(text);
	close(fd);

	if (n_written != n_read)
	return (0);

	return (n_read);
}
