#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a string to be scanned
 * @accept: a string searched in s
 * Return: a string after the searche character or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
