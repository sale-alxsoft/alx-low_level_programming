#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: a variable of type n
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
