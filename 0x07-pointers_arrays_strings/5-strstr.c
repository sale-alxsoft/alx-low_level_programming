#include "main.h"
#include "stdio.h"

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
		while (needle[j] != '\0')
		{
		    if (haystack[i + j] != needle[j])
            {
                break;
            }
			j++;
		}
        if (!needle[j])
            {
                return (&haystack[i]);
            }
		i++;
	}
	return (NULL);
}
