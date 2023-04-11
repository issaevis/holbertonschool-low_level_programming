#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * create_file- Creates a textfile
 *
 * @filename: the name of the file we print from
 * @text_content: the text we need to add to the file
 *
 * Return: Returns 1 if it works and 0 otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int fd, f_write;

	if (filename == NULL)
		return (-1);


	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	f_write = write(fd, text_content, strlen(text_content));
	if (f_write == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (1);
}
