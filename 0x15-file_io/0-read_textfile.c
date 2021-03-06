#include "main.h"
/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: name of the file
 * @letters: number of characters to be printed
 *
 * Return: number of characters print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t rd;
	ssize_t wr;
	char *buff = malloc(letters * sizeof(char));

	if (filename == NULL || buff == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	if (fd == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		return (0);
	}

	free(buff);
	close(fd);

	return (wr);
}
