#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to a char
 * Return: null
 */
void print_rev(char *s)
{
	int i;
	
	i = 1;
	while (*s++)
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
