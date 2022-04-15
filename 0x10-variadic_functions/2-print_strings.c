#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print arguments of string
 * @separator: separate arguments
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *ptr;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
