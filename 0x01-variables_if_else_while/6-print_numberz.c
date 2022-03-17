#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
