#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: array of int
 * @size: the number of elements of an array
 * @action: a function pointer
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	for (i = 0; i < size_c; i++)
	{
		action(array[i]);
	}
}
