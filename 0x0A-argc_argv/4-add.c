#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int i, j, total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
