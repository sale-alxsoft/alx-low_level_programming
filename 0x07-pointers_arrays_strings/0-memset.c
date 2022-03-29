#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to be filled
 * @b: a string to fill s
 * @n: a number of elements to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
