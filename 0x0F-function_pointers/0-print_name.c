#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that takes a function pointer as an argument
 * @name: a pointer to string
 * @f: a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
