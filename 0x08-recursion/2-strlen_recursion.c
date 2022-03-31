#include "main.h"
/**
 * _strlen_recursion - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return (0);
	}
	if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(&s[i + 1]));
	}
	return (s[i]);
}
