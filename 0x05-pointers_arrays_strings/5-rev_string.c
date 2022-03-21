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

	i = 0;
	while (i < strlen(s))
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
