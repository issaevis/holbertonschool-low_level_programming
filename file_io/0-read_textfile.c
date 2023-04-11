#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>

/**
 *
 *
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, f_read, f_write;
	char* text;

	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	f_read = read(fd, text, letters);
	if (text == NULL)
		return (0);

	f_write = write(STDOUT_FILENO, text, f_read);
	if (f_write == -1)
		return (0);

	close(fd);
	return (f_read);
}
