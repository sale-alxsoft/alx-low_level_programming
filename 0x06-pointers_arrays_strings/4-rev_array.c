#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: a pointer to an array of string
 * @n: number of elements of the array
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
