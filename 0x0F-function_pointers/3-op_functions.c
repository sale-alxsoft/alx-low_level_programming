#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add a and b
 * op_sub - substract a and b
 * op_mul _ multiply a and b
 * op_div - divide a to b
 * op_mod - return the remainder
 * @a: first variable
 * @b: second variable
 * Return: the outcome of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (abs(a - b));
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
