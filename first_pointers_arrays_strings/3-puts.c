#include"main.h"
/**
 * _puts - print a string using pointer
 * @str: the string to prints
 *
 * Return: null
 */
void _puts(char *str)
{
	for (; *str ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
