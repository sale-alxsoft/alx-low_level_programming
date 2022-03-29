#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer to a string to be scanned
 * @c: a string to be searched in s
 * Return: to the first occurence of c in s or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0')
}
