#include "main.h"
/**
 * raiz - Entry point
 * @n: numero_raiz
 * @j: numero a iterar
 * Return: Always 0 (Success)
 */
int raiz(int n, int j)
{
	if (j * j == n)
	{
		return (j);
	}
	if (j * j > n)
	{
		return (-1);
	}
	return (raiz(n, j + 1));
}
/**
 * _sqrt_recursion - Entry point
 * @n: numero_raiz
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (raiz(n, i));
}
