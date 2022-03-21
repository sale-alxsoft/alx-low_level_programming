#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to a char
 * Return: null
 */
void print_rev(char *s)
{
	while (*s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
