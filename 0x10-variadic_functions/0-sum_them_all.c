#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function
 * @n: is the firsr argument
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = n; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
