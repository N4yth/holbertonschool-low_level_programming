#include "main.h"
/**
 * _isalpha - use to see if the entry is a letter lower or upper
 * @c: the character to test
 *
 * Return: 1 if the entry is a letter upper or lower or 0 in all
 * other situation
 */
int _isalpha(int c)
{
	unsigned int var;

	var = c;
	if (var < 65 || var > 127)
		if (var > 90 || var < 97)
			return (0);
		else
			return (1);
	else
		return (1);
}
