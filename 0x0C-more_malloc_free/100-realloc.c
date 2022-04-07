#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size of the new memory block
 * Return: modified ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
