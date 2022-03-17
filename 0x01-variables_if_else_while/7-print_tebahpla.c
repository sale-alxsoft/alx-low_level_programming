#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
