#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: array of int
 * @size: the number of elements of an array
 * @action: a function pointer
 */
void array_iterator(int *array, size_t size, void (*action(int)))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
