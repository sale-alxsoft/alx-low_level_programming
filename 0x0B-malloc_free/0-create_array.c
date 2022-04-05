#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the number of chars stored
 * @c: the character being stored in an array
 * Return: NULL if size = 0, a pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mem;

	mem = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		mem[i] = c;
	}
	return (mem);
}
