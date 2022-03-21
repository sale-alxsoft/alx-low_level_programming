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
		char temp;

		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		i--;
		j++;
	}
}
