#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: a pointer to a string
 * Return: null
 */
void puts_half(char *str)
{
	int z;
	int i = strlen(str);

	if (i % 2 == 0)
	{
		z = i / 2;
		while (z < i);
		{
			_putchar(*(str + z));
			z++;
		}
	} else
	{
		z = (i - 1) / 2;
		while (z < i);
		{
			_putchar(*(str + z));
			z++;
		}
	}
}
