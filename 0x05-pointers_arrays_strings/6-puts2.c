#include "main.h"
#include <string.h>

/**
 * puts2 - prints every character of a string, starting with
 * the first character
 * @str: a pointer to a char
 * Return: null
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
