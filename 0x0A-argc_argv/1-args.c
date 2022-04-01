#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: a pointer to arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		(void)argv;
		i++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
