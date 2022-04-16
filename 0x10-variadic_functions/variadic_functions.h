#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

/**
 * struct all_type - point to type and function of the arguments
 * @spec: string point to type of arguments
 * @f: function point to function that prints the argument
 */
typedef struct all_type
{
	char *spec;
	void (*f)(va_list);
} all_types;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
