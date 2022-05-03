#include "main.h"
/**
 * create_file - create a file and write it
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count])
		count++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, count);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
