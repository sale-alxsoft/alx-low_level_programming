#include <stdio.h>

/**
 * main - prints the alphabet(except q and e) in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	putchar('\n');
	return (0);
}
