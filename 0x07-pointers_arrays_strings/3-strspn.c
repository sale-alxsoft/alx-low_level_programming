#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: a string in which the prefix substring searched in
 * @accept: a prefix string
 * Return: the length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				return (j + 1);
			}
		}
	}
	return (j);
}
