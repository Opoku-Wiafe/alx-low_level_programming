#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of the file to be created.
 * @text_content: file content.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdis;
	int charac;
	int readNwrite;

	if (!filename)
		return (-1);
	fdis = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdis == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (charac = 0; text_content[charac]; charac++)
		;
	readNwrite = write(fdis, text_content, charac);
	if (readNwrite == -1)
		return (-1);

	close(fdis);
	return (1);
}
