#include "mian.c"

/**
 * string_toupper - changes all the lowercase letters of a string to uppercase
 * @up: a pointer to modify a string
 * Return: reversed string
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
