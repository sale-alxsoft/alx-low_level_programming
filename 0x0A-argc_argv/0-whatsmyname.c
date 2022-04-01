#include <stdio.h>

/**
 * main - prints the name of excutable file
 * @argc - count the number of arguments from command line
 * @argv: a pointer to the strings that are passed from commad line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
