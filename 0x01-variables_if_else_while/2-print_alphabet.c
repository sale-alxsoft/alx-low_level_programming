#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
