#include <stdio.h>

/**
 * main - print all numbers with base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int alpha;
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
