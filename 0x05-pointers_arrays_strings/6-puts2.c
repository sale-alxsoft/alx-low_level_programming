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

	for (i = 0; i <= strlen(str) - 1; i++)
	{
		while (*str)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
}
