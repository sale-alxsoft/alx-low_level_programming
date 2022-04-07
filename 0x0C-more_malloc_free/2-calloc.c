#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for array
 * @nmemb: the number elements of an array
 * @size: the size of a single element
 * Return: NULL if nmemb or size is zero, NULL if malloc fails,
 * return a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new_arr = malloc(size * nmemb);
	if (new_arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		new_arr[i] = 0;
	return (new_arr);
}
