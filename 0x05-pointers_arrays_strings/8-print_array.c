#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to an integer
 * @n: number of elements to be printed
 * Return: null
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(*(a + i));
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\');
}
