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
	int _filedis;
	unsigned long  numWrite;
	size_t _length;

	if (filename == NULL)
		return (-1);

	_filedis = open(filename, O_WRONLY | O_APPEND);
	if (_filedis == -1)
		return (-1);

	if (text_content != NULL)
	{
		_length = strlen(text_content);
		numWrite = write(_filedis, text_content, _length);
		if (numWrite != _length)
		{
			close(_filedis);
				return (-1);
		}
	}

	close(_filedis);
	return (1);
}
