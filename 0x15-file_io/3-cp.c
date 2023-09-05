#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - function to copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	ssize_t bytes_written;
	int fdis_from, fdis_to;

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
			exit(97);
	}
	fdis_from = open(argv[1], O_RDONLY);
	if (fdis_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
fdis_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fdis_to == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
	}
	while ((bytes_read = read(fdis_from, buffer, BUFFER_SIZE)) > 0)
	{	bytes_written = write(fdis_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
				exit(99);
		}
	}
	if (bytes_read == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	if (close(fdis_from) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdis_from);
			exit(100);
	}
	if (close(fdis_to) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdis_to);
			exit(100);
	}
	return (0);
}
