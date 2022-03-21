#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to a char
 * Return: null
 */
void _puts(char *str)
{
	char i;

	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
