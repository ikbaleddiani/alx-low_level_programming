#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file sortie.
 * @file_to: file entre
 * @arg: arguments
 */

void error_file(int file_from, int file_to, char *arg[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
		exit(99);
	}
}

/**
 * main - check the code 
 * @arg1: num of arguments.
 * @arg2: arguments
 *
 * Return: Always 0.
 */

int main(int arg1, char *arg2[])
{
	int file_from, file_to, err_close;
	ssize_t n_chrs, nwr;
	char buf[1024];

	if (arg1 != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(arg2[1], O_RDONLY);
	file_to = open(arg2[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, arg2);

	n_chrs = 1024;
	while (n_chrs == 1024)
	{
		n_chrs = read(file_from, buf, 1024);
		if (n_chrs == -1)
			error_file(-1, 0, arg2);
		nwr = write(file_to, buf, n_chrs);
		if (nwr == -1)
			error_file(0, -1, arg2);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
