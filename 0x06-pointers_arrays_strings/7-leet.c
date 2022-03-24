#include "main.c"

/**
 * leet - encodes a string into 1337
 * @enc: a pointer to encode a string
 * Return: encoded string
 */
char *leet(char *enc)
{
	int i, j;

	char *a = "aAeEo0tTlL";
	char *b = "4433007711";

	for (i = 0; enc[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (enc[i] == a[j])
			{
				enc[i] = b[j];
			}
		}
	}

	return (s);
}
