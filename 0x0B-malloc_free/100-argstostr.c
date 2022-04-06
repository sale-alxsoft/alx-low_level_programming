#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: the number of arguments passed
 * @av: the address of arguments passed
 * Return: NULL if ac == 0 or av == NULL, NULL if it fails, or
 * reurns  a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, count, k;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	new_str = malloc(sizeof(char) * (count + 1));
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	for (i = j = k = 0; k < count; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			new_str[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < count - 1)
			new_str[k] = av[i][j];
	}
	new_str[k] = '\0';
	return (new_str);
}
