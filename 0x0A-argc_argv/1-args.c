#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argc: a pointer to arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	print("%d\n", argc - 1);
	return (0);
}
