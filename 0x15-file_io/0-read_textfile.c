#include "main.h"
/**
 * read_textfile - func reads a text file and prints it to the POSIX stdout
 * @filename: file name
 * @letters: characters to be read and printed
 *
 * Return: results of the actual characters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int _filedis;
	ssize_t numRead, numWrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	_filedis = open(filename, O_RDONLY);
	if (_filedis == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	numRead = read(_filedis, buffer, letters);
	if (numRead == -1)
		return (0);

	numWrite = write(STDOUT_FILENO, buffer, numRead);
	if (numWrite == -1 || numWrite != numRead)
		return (0);

	free(buffer);
	close(_filedis);

	return (numWrite);
}
