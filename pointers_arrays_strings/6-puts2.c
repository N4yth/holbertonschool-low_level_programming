#include"main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 * Return: null
 */
void puts2(char *s)
{
	int length = 0, i;

	length = _strlen(s);
	if (length > 0)
	{
		for (i = 0 ; i <= length - 1  ; i++)
		{
			if (i % 2 == 0)
				_putchar(s[i]);
		}
	}
	_putchar('\n');
}
