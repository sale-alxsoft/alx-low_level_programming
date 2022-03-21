#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to a char
 * Return: null
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
