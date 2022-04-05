#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2 dimensional array of integers
 * @width: the number of column
 * @height: the number of row
 * Return: NULL if it fails, 0, or NULL if width or height is 0 Or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;
	int v;

	v = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * (width * height));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = v;
			if (j == width - 1)
				_putchar('\n');
		}
	}
	return (ptr);
}
