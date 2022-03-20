#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: a number to be evaluated
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -n % 10;
		_putchar(r);
	}
	if (n > 0)
	{
		r = n % 10;
		_putchar(r);
	}
	return (0);
}
