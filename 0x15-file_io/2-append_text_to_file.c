#include "main.h"
/**
 * append_text_to_file - funt appends text at the end of a file
 * @filename: name of file we are adding to.
 * @text_content: content we are adding.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist or if it fails.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdis;
	long unsigned int  numWrite;
	size_t length;

	if (filename == NULL)
		return (-1);

	fdis = open(filename, O_WRONLY | O_APPEND);
	if (fdis == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		numWrite = write(fdis, text_content, length);
		if (numWrite != length)
		{
			close(fdis);
				return (-1);
		}
	}

	close(fdis);
	return (1);
}
