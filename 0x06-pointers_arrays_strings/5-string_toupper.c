#include "main.h"

/**
 * string_toupper - changes all the lowercase letters of a string to uppercase
 * @up: a pointer to modify a string
 * Return: reversed string
 */
char *string_toupper(char *up)
{
	int i;

	for (i = 0; up[i] != '\0'; i++)
	{
		if (up[i] >= 'a' && up[i] <= 'z')
			up[i] = up[i] - 32;
	}

	return (up);
}
