#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return the pointer to a the allocated space which
 * contains a copy of teh string given as a
 * @str: a pointer to a string
 * Return: NULL if str = NULL, a pointer to a duplicated string,
 * NULL if the memory is insufficient
 */
char *_strdup(char *str)
{
	char *dupstr;
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	dupstr = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	if (dupstr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		dupstr[i] = str[i];
		i++;
	}
	return (dupstr);
}
