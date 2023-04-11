#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>

/**
 * read_textfile- Reads a textfile and displays it using the
 * open, read and write functions
 *
 * @filename: the name of the file we print from
 * @letters: the size of how many bytes (chars) we want to print
 *
 * Return: Returns signed size_t that has stored the number of printed chars
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, f_read, f_write;
	char *text;

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
