#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);
void print_all(const char * const format, ...);

/**
 * print_char - print characters
 * @args: argument point to the charcter
 */
void print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	printf("%c", character);
}
/**
 * print_int - print integers
 * @args: argument point to integer to be printed
 */
void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}
/**
 * print_float - print float number
 * @args: argument point to float
 */
void print_float(va_list args)
{
	float num;

	num = va_arg(args, double);
	printf("%f", num);
}
/**
 * print_str - print strings
 * @args: argument point to strings
 */
void print_str(va_list args)
{
	char *string;

	string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)\n");
		return;
	}
	printf("%s", string);
}
/**
 * print_all - print all type
 * @format: a list of type of arguments
 */
void print_all(const char * const format, ...)
{
	all_types all[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};
	int i = 0;
	int j;
	char *separator = "";

	va_list args;

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(all[j].spec)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			all[j].f(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

