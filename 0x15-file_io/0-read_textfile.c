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
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0,if write fails or does not write the expected
 *amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, len, write;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		return (0);
	}

	len = read(fd, text, letters);
	write = write(STDOUT_FILENO, text, len);
	close(file);

	return (write);
}
