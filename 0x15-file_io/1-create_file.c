#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - a function that creates a file.
 * @filename: named of the file
 * @text_content: texte to write
 *
 * Return: to the created file
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_l = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_l] != '\0')
			text_l++;
		if (write(fd, text_content, text_l) != text_l)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
