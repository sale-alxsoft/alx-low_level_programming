#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: the number arguments passed from command line
 * @argv: a pointer to strings passed from command line
 * Return: 1 if argc != 2, other wise 0.
 */
int main(int argc, char *argv[])
{
	int cents;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		count += 1;
	}
	printf("%d\n", count);
	return (0);
}
