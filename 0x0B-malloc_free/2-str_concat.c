#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer point to newly allocated space
 * for the concatented strings
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, temp;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	new_str = malloc(sizeof(char) * (i + j + 1));
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	temp = i;
	for (i = 0; i < temp; i++)
		new_str[i] = s1[i];
	for (k = 0; k < j; i++, k++)
		new_str[i] = s2[k];
	return (new_str);
}
