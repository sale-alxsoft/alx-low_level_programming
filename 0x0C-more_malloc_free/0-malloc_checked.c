#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory
 * Return: a pointer to the allocated memory
 * if malloc fails, terminate with the a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	*mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
