#include <stdio.h>
#include <stdlib.h>

/**
 * main - prinys the product of numbers
 * @argc: the number of arguments
 * @argv: a pointer to arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int r;

	i = 1;
	r = 1;
	if (argv[i] == (void *)0)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		r = r * atoi(argv[i]);
		i++;
	}
	printf("%d\n", r);
	return (0);
}
