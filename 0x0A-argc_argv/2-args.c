#include <stdio.h>

/**
 * main - prints all argiments it recieves
 * @argc: the number of arguments
 * @argv: a pointer to arguments
 * Return: Always 0.
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
