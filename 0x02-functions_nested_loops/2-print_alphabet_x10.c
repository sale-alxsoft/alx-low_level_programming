#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 * Return: null
 */

void print_alphabet_x10(void)
{
	int i;
	char alpha;

	i = 0;
	alpha = 'a';

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
