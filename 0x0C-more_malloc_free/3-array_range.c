#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum number
 * @max: the maximum number
 * Return: the pointer to newly created array
 * return NULL if min > max or if it fails
 */
int *array_range(int min, int max)
{
	int count, i, *new_arr;

	if (min > max)
		return (NULL);
	count = max - min + 1;
	new_arr = malloc(sizeof(int) * count);
	if (new_arr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		new_arr[i] = min;
		min++;
	}
	return (new_arr);
}
