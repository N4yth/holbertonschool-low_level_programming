#include "main.h"
/**
 * _isdigit - use to know if a charachter a digit or not
 * @c: the character to test
 *
 * Return: 1 if the entry is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
