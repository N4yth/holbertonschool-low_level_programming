#include"main.h"
#include "2-strlen.c"
/**
 * puts_half - print only half of a string
 * @str: the string to print
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
			length += 1;
		}
			for (i = length / 2 ; i <= length - 1 ; i++)
			{
				_putchar(str[i]);
			}
	}
	_putchar('\n');
}
