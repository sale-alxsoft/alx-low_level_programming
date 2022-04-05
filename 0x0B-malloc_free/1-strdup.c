#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return the pointer to a the allocated space which
 * contains a copy of teh string given as a
 * @str: a pointer to a string
 * Return: NULL if str = NULL, a pointer to a duplicated string, NULL if the memory is insufficient
 */
char *_strdup(char *str)
{
	char *dupstr;

	dupstr = malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	dupstr = str;
	if (sizeof(dupstr) > sizeof(str))
	{
		return (NULL);
	}
	return (dupstr);
}
