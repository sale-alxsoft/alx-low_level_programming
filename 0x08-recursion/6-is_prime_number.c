#include "main.h"
/**
 * primos - Entry point
 * @n: numero_raiz
 * @j: numero a iterar
 * Return: Always 0 (Success)
 */
int primos(int n, int j)
{
	if (n % j == 0 && n == j)
	{
		return (1);
	}
	if (n % j == 0 && n != j)
	{
		return (0);
	}
	return (primos(n, j + 1));
}
/**
 * is_prime_number - Entry point
 * @n: numero_raiz
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (primos(n, i));
}
