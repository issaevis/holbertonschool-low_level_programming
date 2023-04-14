#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - entry function
 *
 * @argc: nr of arguments
 * @argv: array of arguments
 *
 * Return: Returns 0 for succes
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	cp(argv[1], argv[2]);

	return (0);
}

/**
 * cp - the copy function
 *
 * @file_from: the source file
 * @file_to: the destination file
 *
 * Return: Returns nothing
 *
 */

void cp(char *file_from, char *file_to)
{

	int file_src, file_dest, r_src, w_dest;
	char count[1024];

	file_src = open(file_from, O_RDONLY);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	r_src = read(file_src, count, 1024);
	if (r_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while (r_src != 0)
	{
		w_dest = write(file_dest, count, r_src);
		if (w_dest == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		r_src = read(file_src, count, 1024);
		if (r_src == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	}
	close_file(file_dest);
	close_file(file_src);

}

/**
 * close_file - function to close a file
 *
 * @file: the file descriptor
 *
 * Return: Returns nothing
 *
 */

void close_file(int file)
{
	int close_f;

	close_f = close(file);
	if (close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
