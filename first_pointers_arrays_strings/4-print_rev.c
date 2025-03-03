#include"main.h"
#include "2-strlen.c"
/**
 * print_rev - print a string using pointer
 * @str: the string to prints
 *
 * Return: null
 */
void print_rev(char *str)
{
	int recursive = 0, i;

	recursive = _strlen(str);
	if (recursive > 0)
	{
		for (i = recursive - 1; i >= 0 ; i--)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
