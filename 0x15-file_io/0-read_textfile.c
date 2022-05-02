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
	int fd;
	char *buff = malloc(letters * sizeof(char));

	if (buff == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
	{
		return (0);
	}

	read(fd, buff, letters);
	buff[letters] = '\0';

	close(fd);

	printf("%s\n", buff);

	fd = 0;
	while (buff[fd] != '\0')
	{
		fd++;
	}
	return (fd);
}
