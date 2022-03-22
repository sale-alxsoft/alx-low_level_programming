#include "main.h"

/**
 * puts2 - prints every character of a string, starting with
 * the first character
 * @str: a pointer to a char
 * Return: null
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
