#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate strings
 * @dest: a pointer to char
 * @src: a pointer to char
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	char termn = '\0';

	*dest = strcat(dest, src);
	*dest = strcat(dest, termn);
	return (dest);
}
