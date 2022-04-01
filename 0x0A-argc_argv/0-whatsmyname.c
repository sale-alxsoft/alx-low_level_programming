#include <stdio.h>

/**
 * main - prints the name of excutable file
 * @argc: count the number of arguments from command line
 * @argv: a pointer to the strings that are passed from commad line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
