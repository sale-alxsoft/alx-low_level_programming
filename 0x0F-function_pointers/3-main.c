#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: arguments passed from cmd
 * Return: Error if the number of arguments is wrong,
 * Error if the operator is none of the five operators
 * Error if the user tries to divide by 0
 * otherwise return 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
		return ("Error\n");
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL || op != '\0')
		return ("Error\n");
	if ((num2 == 0 && op == "/") ||  (num2 == 0 && op == "%"))
		return ("Error\n");
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
