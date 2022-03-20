#include "main.h"

/**
 * _isalpha - checks for alphatic character
 * @c: a letter to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
