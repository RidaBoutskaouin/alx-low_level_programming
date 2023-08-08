#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_src, file_dest, readed, written;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_src = open(argv[1], O_RDONLY);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((readed = read(file_src, buff, 1024)) > 0)
	{
		written = write(file_dest, buff, readed);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); } }
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(file_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_src);
		exit(100); }

	if (close(file_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100); }

	return (0);
}
