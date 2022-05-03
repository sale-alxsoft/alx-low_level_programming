#include "main.h"

void close_file(int fd);
char *buffer(char *file);
/**
 * close_file - close file descriptor
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to fd %d\n", fd);
		exit(100);
	}
}
/**
 * buffer - create a string pointer
 * @file: name of the file in which the contents copied to
 *
 * Return: a string pointer
 */
char *buffer(char *file)
{
	char *buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * main - copy the contents of one file to the other
 * @ac: number of arguments
 * @av: points to arguments
 *
 * Return: 0 for success
 */
int main(int ac, char **av)
{
	int opfrom, opto, rdfrom, wrto;
	char *buff = buffer(av[2]);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "cp file_from file_to\n");
		exit(97);
	}
	opfrom = open(av[1], O_RDONLY);
	rdfrom = read(opfrom, buff, 1024);
	opto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	do {
		if (opfrom == -1 || rdfrom == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}
		wrto = write(opto, buff, rdfrom);
		if (opto == -1 || wrto == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}

		rdfrom = read(opfrom, buff, 1024);
		opto = open(av[2], O_WRONLY | O_APPEND);
	} while (rdfrom > 0);

	free(buff);
	close_file(opfrom);
	close_file(opto);
	return (0);
}
