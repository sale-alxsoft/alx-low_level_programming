#include <stdio.h>
#include <stdlib.h>
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
	int i, j, num, total;

	total = 0;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			total += num;
		}
		printf("%d\n", total);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
