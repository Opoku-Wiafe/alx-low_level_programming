#include "main.h"
void check_i_o(int stat, int fdis, char *filename, char mode);
/**
 * main - function to copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int source, dest, num_read = 1024, old_write, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	check_i_o(source, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_i_o(dest, -1, argv[2], 'W');
	while (num_read == 1024)
	{
		num_read = read(source, buffer, sizeof(buffer));
		if (num_read == -1)
			check_i_o(-1, -1, argv[1], 'O');
		old_write = write(dest, buffer, num_read);
		if (old_write == -1)
			check_i_o(-1, -1, argv[2], 'W');
	}
	close_src = close(source);
	check_i_o(close_src, source, NULL, 'C');
	close_dest = close(dest);
	check_i_o(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_i_o - function to determine if its a editable
 * @stat: file descriptor
 * @filename: name of the file to be checked
 * @mode: start of thr function or close
 * @fdis: file descriptor
 *
 * Return: void or Nothing
 */
void check_i_o(int stat, int fdis, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdis);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
