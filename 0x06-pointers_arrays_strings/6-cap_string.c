#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @cap: a pointer to capitalizes a string
 * Return: capitalized string
 */
char *cap_string(char *cap)
{
	int i, j;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	for (i = 0; cap[i] != '\0'; i++)
	{
		if (i == 0 && cap[i] >= 'a' && cap[i] <= 'z')
			cap[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (cap[i] == sep[j])
			{
				if (cap[i + 1] >= 'a' && cap[i + 1] <= 'z')
				{
					cap[i + 1] -= 32;
				}
			}
		}
	}

	return (cap);

}
