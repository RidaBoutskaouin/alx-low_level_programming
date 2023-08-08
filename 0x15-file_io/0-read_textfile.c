#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t readed, printed;
	char *buff;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	readed = read(file_desc, buff, letters);
	if (readed == -1)
		return (0);

	printed = write(STDOUT_FILENO, buff, readed);
	if (printed == -1)
		return (0);

	close(file_desc);
	free(buff);
	return (printed);
}
