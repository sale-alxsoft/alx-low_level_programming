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
	int i = 0;
	int z = strlen(str);

	while (i < z)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
