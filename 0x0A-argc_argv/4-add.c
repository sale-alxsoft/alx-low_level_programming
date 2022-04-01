#include <stdio.h>

/**
 * main - adds positive number
 * @argc: number of arguments
 * @argv: a pointer to arguments passed to it
 * Return: 0 if no argument is passed, 
 * 1 if one of the numbers contains symbols and 
 * return the total sum if every thing is ok.
 */
int main(int argc, char *argv[])
{
	int i;
	int total;

	i = 1;
	total = 0;
	while (i < argc)
	{
		if (argv[i] == (void *)0)
		{
			return (0);
		}
		if (!(atoi(argv[i]) / i))
		{
			printf("Error\n");
			return (1);
		}
		total += atoi(argv[i]);
		i++;
	}
	printf("%d\n", total);
	return (0);
}
