#include "main.h"
/**
 * _puts_recursion - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
}