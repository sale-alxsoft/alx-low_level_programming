#include "main.h"
/**
 * append_text_to_file - appends text at the end
 * @filename: name of the file
 * @text_content: contents
 *
 * Return: 1 for success, -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count])
			count++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, count);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
