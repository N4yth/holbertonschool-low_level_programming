#include"main.h"
#include "2-strlen.c"
/**
 * puts2 - programme that print some character from a string
 * @s: the string to print
 *
 * Return: null
 */
void puts_half(char *str)
{
	int length = 0, i;

	length = _strlen(str);
	if (length > 0)
	{
		if (length % 2 != 0)
		{
			length -= 1;
		}
			for (i = length / 2 ; i <= length ; i++)
			{
				_putchar(str[i]);
			}
	}
	_putchar('\n');
}
