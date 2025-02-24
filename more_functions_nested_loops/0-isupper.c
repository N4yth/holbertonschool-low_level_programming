#include "main.h"
/**
 * _isupper - use to know if a charachter is uppercase or not
 * @c: the character to test
 *
 * Return: 1 if the entry is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
