#include "main.h"
/**
 * _pow_recursion - Entry point
 *
 * @x: numero_1
 *
 * @y: numero a la potencia
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (0 + x * _pow_recursion(x, y - 1));
	}
	return (y);
}
