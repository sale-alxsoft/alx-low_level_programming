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
	int j;

	j = 0;
	i = strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(*(s + j));
		_putchar(*(s + i));
		i--;
		j++;
	}
	_putchar('\n');
}
