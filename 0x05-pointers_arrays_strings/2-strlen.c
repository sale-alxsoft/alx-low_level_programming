#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a pointer to an char
 * Return: Alway 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		++length;
	}
	return (length);
}
