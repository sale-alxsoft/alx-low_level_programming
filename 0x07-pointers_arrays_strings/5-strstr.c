#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: a string to be scanned
 * @needle: substring to be searched
 * Return: haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			_putchar("%c", s[i]);
			j += 1;
		}
		i++;
	}
	return ('\0');
}
