#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separate the numbers
 * @n: the number of arguments
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
