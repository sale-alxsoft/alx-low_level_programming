#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of s2 which concatenate on s1
 * Return: NULL if it fails, othewise return a pointer to a newly
 * allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, tempi, tempj;
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
		return (NULL);
	}
	tempi = i;
	for (i = 0; i < tempi; i++)
		new_str[i] = s1[i];
	tempj = j;
	if (tempj > n)
	{
		for (j = 0; j < n; i++, j++)
			new_str[i] = s2[j];
	} else
	{
		for (j = 0; j < tempj; i++, j++)
			new_str[i] = s2[j];
	}
	new_str[i] = '\0';
	return (new_str);
}
