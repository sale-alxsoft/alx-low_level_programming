#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add a and b
 * @a: first variable
 * @b: second variable
 * Return: the outcome of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract b from a
 * @a: first variable
 * @b: the second variable
 * Return: the outcome of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a and b
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a by b
 * @a: the first number
 * @b: the second number
 * Return: outcome the operation
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculate for the remainder of
 * the division of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
