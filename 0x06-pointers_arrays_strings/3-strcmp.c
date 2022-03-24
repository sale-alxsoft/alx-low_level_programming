#include "main.h"

/**
 * _strcmp - compaires two strings
 * @s1: a pointer to string
 * @s2: a pointer to string
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
