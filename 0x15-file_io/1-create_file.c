#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, i, written;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_desc);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	written = write(file_desc, text_content, i);
	if (written == -1)
		return (-1);

	close(file_desc);
	return (1);
}
