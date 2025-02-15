#include "main.h"
/**
 * _islower - use to see if the entry is a uppercase letter
 * @c: the character to test
 *
 * Return: 1 if the entry is a uppercase or 0 in all other situation
 */
int _islower(int c)
{
	unsigned int var;

	var = c;
	if (var < 97 || var > 122)
		return (0);
	else
		return (1);
}
