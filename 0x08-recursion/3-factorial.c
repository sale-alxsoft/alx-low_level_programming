#include "main.h"
/**
 * factorial - Entry point
 *
 * @n: numero factorial
 *
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (0 + n * factorial(n - 1));
	}
	return (n);
}
