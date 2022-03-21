#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: a pointer to a char
 * Return: null
 */
void rev_string(char *s)
{
	int i;

	i = strlen(s);
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
